/*
** EPITECH PROJECT, 2019
** is_button_song
** File description:
** is_button_song
*/

#include "utils_defender.h"

void is_button_menu_song(scene_t *menu , window_t *window, int index)
{
    if (is_cursor_on_sprite(menu->button[index].sprite0,
    menu->button[index].size, window) == 1 &&
    menu->sound[index].is_sound == 0) {
        menu->sound[index].is_sound = 1;
        sfMusic_play(menu->sound->music);
    }
    if (is_cursor_on_sprite(menu->button[index].sprite0,
    menu->button[index].size, window) == 0)
        menu->sound[index].is_sound = 0;
}