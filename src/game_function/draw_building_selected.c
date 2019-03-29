/*
** EPITECH PROJECT, 2019
** building
** File description:
** building
*/

#include "utils_defender.h"

void draw_at_cursor(window_t *window, sprite_t sprite)
{
    sfVector2i pos_cursor = sfMouse_getPositionRenderWindow(window->window);
    sfVector2f pos_c = {pos_cursor.x - (sprite.size.x / 2),
        pos_cursor.y - (sprite.size.y / 2)};

    sfSprite_setPosition(sprite.sprite, pos_c);
    sfRenderWindow_drawSprite(window->window, sprite.sprite, NULL);
}

void draw_building_or_cross(window_t *window, scene_t *game, int *tab)
{
    if (check_building_placement(window, game, tab[2]) == 1) {
        game->index->index_placement = 1;
        draw_at_cursor(window, game->sprite[tab[0]]);
        if (tab[3] != 0)
            draw_at_cursor(window, game->sprite[tab[3]]);
    } else {
        game->index->index_placement = 0;
        draw_at_cursor(window, game->sprite[tab[1]]);
    }
}

void draw_building_selected(window_t *window, scene_t *game)
{
    switch (game->index->index_ui) {
        case 1: draw_building_or_cross(window, game, (int[4]){2, 5, 1, 7});
            break;
        case 2: draw_building_or_cross(window, game, (int[4]){3, 5, 2, 6});
            break;
        case 3: draw_building_or_cross(window, game, (int[4]){4, 5, 3, 0});
            break;
        default: break;
    }
}