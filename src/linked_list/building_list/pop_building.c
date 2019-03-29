/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** pop_building.c
*/

#include "utils_defender.h"

void pop_building_front(ll_building_t *list)
{
    building_t *temp = list->start;

    list->start = list->start->next;
    list->start->previous = NULL;
    temp->previous = NULL;
    temp->next = NULL;
    free(temp);
    temp = NULL;
}

void pop_building_back(ll_building_t *list)
{
    building_t *temp = list->end;

    list->end = list->end->previous;
    list->end->next = NULL;
    temp->next = NULL;
    temp->previous = NULL;
    free(temp);
    temp = NULL;
}

void pop_building_among(building_t *building)
{
    building->previous->next = building->next;
    building->next->previous = building->previous;
    building->next = NULL;
    building->previous = NULL;
    free(building);
    building = NULL;
}


void pop_building_pos_determinator(ll_building_t *list, building_t *building)
{
    if (building == list->start)
        pop_building_front(list);
    else if (building == list->end)
        pop_building_back(list);
    else
        pop_building_among(building);
}

void pop_building(ll_building_t *list, building_t *building)
{
    if (list->start == NULL)
        return;

    if (list->ll_size == 1) {
        free(list->start);
        list->start = NULL;
        list->end = NULL;
    } else {
        pop_building_pos_determinator(list, building);
    }
    list->ll_size -= 1;
}