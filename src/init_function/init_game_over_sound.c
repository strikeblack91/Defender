/*
** EPITECH PROJECT, 2019
** over
** File description:
** over
*/

#include "utils_defender.h"

void init_game_over_sound(sound_t *sound)
{
    sound[0] = create_sound("src/main_menu/button_song.ogg", 80, false);
    sound[1] = create_sound("src/main_menu/button_song.ogg", 80, false);
    sound[2] = create_sound("src/game_over/end_song.ogg", 80, false);
}