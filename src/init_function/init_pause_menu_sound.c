/*
** EPITECH PROJECT, 2019
** pause
** File description:
** pause
*/

#include "utils_defender.h"

void init_pause_menu_sound(sound_t *sound)
{
    sound[0] = create_sound("src/main_menu/button_song.ogg", 80, false);
    sound[1] = create_sound("src/main_menu/button_song.ogg", 80, false);
    sound[2] = create_sound("src/main_menu/button_song.ogg", 80, true);
}