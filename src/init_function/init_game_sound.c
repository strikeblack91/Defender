/*
** EPITECH PROJECT, 2019
** pause
** File description:
** pause
*/

#include "utils_defender.h"

void init_game_sound(sound_t *sound)
{
    sound[0] = create_sound("mario.ogg", 30, sfTrue);
}