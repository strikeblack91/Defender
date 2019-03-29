/*
** EPITECH PROJECT, 2018
** Untitled (Workspace)
** File description:
** destroy_build_monst_list.c
*/

#include "utils_defender.h"

void destroy_building_monster_list(ll_building_t *build_list,
    ll_monster_t *monst_list)
{
    for (building_t *temp = build_list->start, *temp2; temp != NULL;) {
        temp2 = temp;
        temp = temp->next;
        free(temp2);
        temp2 = NULL;
    }
    for (monster_t *temp = monst_list->start, *temp2; temp != NULL;) {
        temp2 = temp;
        temp = temp->next;
        free(temp2);
        temp2 = NULL;
    }
}