/*
** EPITECH PROJECT, 2019
** draw
** File description:
** draw
*/

#include "utils_defender.h"

void draw_button(button_t b, window_t *window)
{
    if (is_cursor_on_sprite(b.sprite0, b.size, window) == 1) {
        sfRenderWindow_drawSprite(window->window, b.sprite1, NULL);
    } else
        sfRenderWindow_drawSprite(window->window, b.sprite0, NULL);
}