/*
** EPITECH PROJECT, 2019
** pos_determinator.c
** File description:
** pos_determinator.c
*/

#include "utils_defender.h"

void insert_building_poslist_determinator(ll_building_t *list, building_t *elem)
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