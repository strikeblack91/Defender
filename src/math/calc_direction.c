/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** calc_direction.c
*/

#include "utils_defender.h"

sfVector2f calc_direction(sprite_t monster, sprite_t building, float distance)
{
    sfVector2f direction = {0, 0};

    sfVector2f pos_monster = sfSprite_getPosition(monster.sprite);
    sfVector2f pos_building = sfSprite_getPosition(building.sprite);

    direction.x = (float)((pos_building.x + building.size.x / 2) -
        (pos_monster.x + monster.size.x / 2)) / distance;
    direction.y = (float)((pos_building.y + building.size.y / 2) -
        (pos_monster.y + monster.size.y / 2)) / distance;

    return (direction);
}