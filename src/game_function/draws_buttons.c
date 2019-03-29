/*
** EPITECH PROJECT, 2019
** draw
** File description:
** draw
*/

#include "utils_defender.h"

void draw_buttons(window_t *window, scene_t *game, int index)
{
    for (int i = 0; i < index; i += 1)
        draw_button(game->button[i], window);
}