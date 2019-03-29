/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** shoot.c
*/

#include "utils_defender.h"

void push_new_bullet(ll_bullet_t *list_bullet, sfVector2f pos, sfVector2i spec,
    float passing_time)
{
    bullet_t *new_bullet = init_bullet(pos, spec.x, spec.y, passing_time);

    if (list_bullet->size == 0) {
        list_bullet->start = new_bullet;
        list_bullet->end = new_bullet;
    } else {
        list_bullet->end->next = new_bullet;
        new_bullet->previous = list_bullet->end;
        list_bullet->end = new_bullet;
    }
    list_bullet->size += 1;
}

void shoot(building_t *building, float passing_time)
{
    push_new_bullet(building->list_bullet,
        (sfVector2f){(sfSprite_getPosition(building->building.sprite).x +
            building->building.size.x / 2),
        (sfSprite_getPosition(building->building.sprite).y +
            building->building.size.x / 2)},
            (sfVector2i){building->damage.x, building->bullet_speed},
            passing_time);
}