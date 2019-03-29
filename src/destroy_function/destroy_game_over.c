/*
** EPITECH PROJECT, 2019
** free
** File description:
** free
*/

#include "utils_defender.h"

void destroy_game_over(scene_t *game)
{
    destroy_sound(game->sound, 3);
}