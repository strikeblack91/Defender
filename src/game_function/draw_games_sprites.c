/*
** EPITECH PROJECT, 2019
** draw
** File description:
** draw
*/

#include "utils_defender.h"

void draw_game_sprites(window_t *window, scene_t *game)
{
    sfRenderWindow_drawSprite(window->window, game->sprite[0].sprite, NULL);
    draw_linked_list_elements(window, game);
    sfRenderWindow_drawSprite(window->window, game->sprite[1].sprite, NULL);
    draw_buttons(window, game, 3);
    draw_building_selected(window, game);
    draw_ui_information(window, game);
}