/*
** EPITECH PROJECT, 2019
** over
** File description:
** over
*/

#include "utils_defender.h"

void game_over_interaction(window_t *window, scene_t *game)
{
    for (int i = 0; i < 2; i++) {
        if (is_cursor_on_sprite(game->button[i].sprite0 ,
        game->button[i].size, window) == 1)
            game->button[i].callback(game, window);
    }
}