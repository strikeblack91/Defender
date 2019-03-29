/*
** EPITECH PROJECT, 2019
** free
** File description:
** free
*/

#include "utils_defender.h"

void destroy_game(scene_t *game)
{
    destroy_building_monster_list(game->building_list, game->monster_list);
    destroy_sound(game->sound, 1);
}