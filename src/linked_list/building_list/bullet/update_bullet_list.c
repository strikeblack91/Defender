/*
** EPITECH PROJECT, 2018
** Untitled (Workspace)
** File description:
** update_bullet_list.c
*/

#include "utils_defender.h"

void pop_bullet_option(ll_bullet_t *list_bullet, bullet_t *bullet)
{
    if (list_bullet->start == bullet) {
        list_bullet->start = bullet->next;
        bullet->next->previous = NULL;
        bullet->next = NULL;
        bullet->previous = NULL;
        bullet = NULL;
    } else if (list_bullet->end == bullet) {
        list_bullet->end = bullet->previous;
        bullet->previous->next = NULL;
        bullet->next = NULL;
        bullet->previous = NULL;
        bullet = NULL;
    } else {
        bullet->previous->next = bullet->next;
        bullet->next->previous = bullet->previous;
        bullet->previous = NULL;
        bullet->next = NULL;
        bullet = NULL;
    }
}

ll_bullet_t *pop_bullet(ll_bullet_t *list_bullet, bullet_t *bullet)
{
    bullet_t *temp = NULL;

    if (list_bullet->start == bullet && list_bullet->end == bullet) {
        bullet = NULL;
        list_bullet->start = NULL;
        list_bullet->end = NULL;
        list_bullet->size -= 1;
        return (list_bullet);
    }
    pop_bullet_option(list_bullet, bullet);
    list_bullet->size -= 1;
    return (list_bullet);
}

void check_bullet_action(bullet_t *temp_bullet, ll_bullet_t *list_bullet,
    monster_t *monster)
{
    float distance = calc_distance_monst_build(temp_bullet->sprite,
        monster->sprite);
    sfVector2f direction = calc_direction(temp_bullet->sprite, monster->sprite,
        distance);

    if (distance > (monster->sprite.size.x / 2 +
    temp_bullet->sprite.size.x / 2)) {
        sfSprite_move(temp_bullet->sprite.sprite,
            (sfVector2f){direction.x * temp_bullet->speed,
            direction.y * temp_bullet->speed});
    } else {
        list_bullet = pop_bullet(list_bullet, temp_bullet);
        monster->health -= temp_bullet->damage;
    }
}

int update_bullet_list(ll_bullet_t *list_bullet, monster_t *monster,
    float passing_time)
{
    for (bullet_t *temp_bullet = list_bullet->start; temp_bullet != NULL; ) {
        check_bullet_action(temp_bullet, list_bullet, monster);
        temp_bullet = temp_bullet->next;
        if (monster->health <= 0)
            return (1);
    }
    return (0);
}