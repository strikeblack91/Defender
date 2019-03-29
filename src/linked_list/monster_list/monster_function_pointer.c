/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** monster_function_pointer.c
*/

#include "utils_defender.h"

void minion_creator(monster_t *elem)
{
    elem->id = 0;
    elem->damage = 10;
    elem->rate_hit = 0.5;
    elem->last_hit = 0.0;
    elem->health = 50;
    elem->speed = 1.5;
    elem->sprite = create_sprite("src/monster/minion.png",
        monster_random_spawn((sfVector2i){1920, 1080}), (sfVector2f){26, 26});
}

void mighty_monster_creator(monster_t *elem)
{
    elem->id = 1;
    elem->damage = 30;
    elem->rate_hit = 1.0;
    elem->last_hit = 0.0;
    elem->health = 200;
    elem->speed = 1.2;
    elem->sprite = create_sprite("src/monster/mighty_monster.png",
        monster_random_spawn((sfVector2i){1920, 1080}),
        (sfVector2f){50, 50});
}

void the_boss_creator(monster_t *elem)
{
    elem->id = 2;
    elem->damage = 150;
    elem->rate_hit = 2.0;
    elem->last_hit = 0.0;
    elem->health = 1000;
    elem->speed = 1;
    elem->sprite = create_sprite("src/monster/boss.png",
        monster_random_spawn((sfVector2i){1920, 1080}), (sfVector2f){150, 150});
}