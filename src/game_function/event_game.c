/*
** EPITECH PROJECT, 2019
** game
** File description:
** game
*/

#include "utils_defender.h"

void ui_interaction(window_t *window, scene_t *game)
{
    for (int i = 0; i < 3; i++) {
        if (is_cursor_on_sprite(game->button[i].sprite0,
        game->button[i].size, window) == 1)
            game->button[i].callback(game, window);
    }
}

void pause_menu_interaction(window_t *window, scene_t *game)
{
    int index;

    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        index = menu_pause_loop(window);
        if (index == 0)
            game->index->exit = 0;
        else if (index == 2)
            game->index->exit = 2;
    }
}

void place_tower(window_t *window, scene_t *game)
{
    sfVector2i pos_cursor = sfMouse_getPositionRenderWindow(window->window);
    sfVector2f pos_c = {pos_cursor.x, pos_cursor.y};

    switch (game->index->index_ui) {
        case 1: game->building_list = insert_building(game->building_list, 1,
            pos_c);
            game->index->money -= 500; break;
        case 2: game->building_list = insert_building(game->building_list, 2,
            pos_c);
            game->index->money -= 1500; break;
        case 3: game->building_list = insert_building(game->building_list, 3,
            pos_c);
            game->index->money -= 2000; break;
        default: break;
    }
    game->index->index_ui = 0;
}

void is_cheat_code(scene_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyG) && sfKeyboard_isKeyPressed(sfKeyO)
    && sfKeyboard_isKeyPressed(sfKeyD)) {
        game->index->money = game->index->money + 10000000000;
    }
}

void event_game(window_t *window, scene_t *game)
{
    while (sfRenderWindow_pollEvent(window->window, &window->event)) {
        if (window->event.type == sfEvtClosed) {
            game->index->exit = 0;
            sfRenderWindow_close(window->window);
        }
        pause_menu_interaction(window, game);
        if (window->event.type == sfEvtMouseButtonPressed)
            ui_interaction(window, game);
        if (game->index->index_placement == 1 &&
            game->index->index_ui != 0 &&
            sfMouse_isButtonPressed(sfMouseLeft) &&
            sfMouse_getPositionRenderWindow(window->window).y < 900)
                place_tower(window, game);
        if (sfMouse_isButtonPressed(sfMouseRight))
            game->index->index_ui = 0;
            //is_cheat_code(game);
    }
}