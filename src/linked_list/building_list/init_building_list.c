/*
** EPITECH PROJECT, 2019
** init_building_list.c
** File description:
** init_building_list.c
*/

#include "utils_defender.h"

ll_building_t *init_building_list(void)
{
    ll_building_t *building_list = malloc(sizeof(ll_building_t));

    building_list->ll_size = 0;
    building_list->start = NULL;
    building_list->end = NULL;

    building_list = insert_building(building_list, 0,
        (sfVector2f){1920 / 2, 1080 / 2 - 75});

    return (building_list);
}