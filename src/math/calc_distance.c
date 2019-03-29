/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** calc_distance.c
*/

#include "utils_defender.h"

float calc_distance_monst_build(sprite_t monster, sprite_t building)
{
    float distance = 0;

    sfVector2f pos_monster = sfSprite_getPosition(monster.sprite);
    sfVector2f pos_building = sfSprite_getPosition(building.sprite);

    distance = sqrt(pow(((pos_monster.x + monster.size.x / 2) -
        (pos_building.x + building.size.x / 2)), 2) +
        pow(((pos_monster.y + monster.size.y / 2) -
        (pos_building.y + building.size.y / 2)), 2));

    return (distance);
}