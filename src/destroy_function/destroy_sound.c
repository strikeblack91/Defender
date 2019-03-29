/*
** EPITECH PROJECT, 2019
** free
** File description:
** free
*/

#include "utils_defender.h"

void destroy_sound(sound_t *sound, int index)
{
    for (int i = 0; i < index; i++)
        sfMusic_destroy(sound[i].music);
    free(sound);
}