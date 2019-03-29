/*
** EPITECH PROJECT, 2019
** pause
** File description:
** pause
*/

#include "utils_defender.h"

void button_pause_event(window_t *w, scene_t *menu)
{
    for (int i = 0; i < 3; i++) {
        if (is_cursor_on_sprite(menu->button[i].sprite0 ,
        menu->button[i].size, w) == 1)
            menu->button[i].callback(menu, w);
    }
}