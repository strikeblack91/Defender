/*
** EPITECH PROJECT, 2019
** init_sound
** File description:
** init_sound
*/

#include "utils_defender.h"

void init_main_menu_sound(sound_t *sound)
{
    sound[0] = create_sound("src/main_menu/button_song.ogg", 80, false);
    sound[1] = create_sound("src/main_menu/button_song.ogg", 80, false);
    sound[2] = create_sound("src/main_menu/menu_song.ogg", 20, false);
}