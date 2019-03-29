/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** poslist_determinator_monster.c
*/

#include "utils_defender.h"

void insert_monster_pos_determinator(ll_monster_t *list, monster_t *elem)
{
    if (list->ll_size == 0) {
        list->start = elem;
        list->end = elem;
    } else {
        list->end->next = elem;
        elem->previous = list->end;
        list->end = elem;
    }
}