/*
** EPITECH PROJECT, 2019
** push_elem.c
** File description:
** push_elem.c
*/

#include "utils_defender.h"

ll_building_t *insert_building(ll_building_t *list, int ID, sfVector2f pos)
{
    building_t *elem = malloc(sizeof(building_t));

    if (elem == NULL)
        return (list);
    elem->id = 0;
    elem->damage = (sfVector2i){0, 0};
    elem->health = 0;
    elem->previous = NULL;
    elem->next = NULL;
    if (building_type_determinator(elem, ID, pos) == -1) {
        free(elem);
        return (list);
    }
    insert_building_poslist_determinator(list, elem);
    list->ll_size += 1;
    return (list);
}