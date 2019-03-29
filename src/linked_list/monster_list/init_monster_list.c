/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** init_monster_list.c
*/

#include "utils_defender.h"

ll_monster_t *init_monster_list(void)
{
    ll_monster_t *monster_list = malloc(sizeof(ll_monster_t));

    monster_list->ll_size = 0;
    monster_list->start = NULL;
    monster_list->end = NULL;

    return (monster_list);
}