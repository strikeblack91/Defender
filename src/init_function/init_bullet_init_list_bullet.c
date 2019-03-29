/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** init_bullet_init_list_bullet.c
*/

#include "utils_defender.h"

bullet_t *init_bullet(sfVector2f pos, int damage, int speed, float shot_time)
{
    bullet_t *bullet = malloc(sizeof(bullet_t));

    bullet->pos = pos;
    bullet->speed = speed;
    bullet->damage = damage;
    bullet->shot_time = shot_time;
    bullet->sprite = create_sprite("src/building/red_bullet.png",
        (sfVector2f){pos.x - 5, pos.y - 5}, (sfVector2f){10, 10});
    bullet->next = NULL;
    bullet->previous = NULL;

    return (bullet);
}

ll_bullet_t *init_bullet_list(void)
{
    ll_bullet_t *list_bullet = malloc(sizeof(ll_bullet_t));

    list_bullet->size = 0;
    list_bullet->start = NULL;
    list_bullet->end = NULL;

    return (list_bullet);
}