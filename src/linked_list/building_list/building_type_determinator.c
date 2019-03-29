/*
** EPITECH PROJECT, 2019
** building_type_determinator.c
** File description:
** building_type_determinator.c
*/

#include "utils_defender.h"

const building_type_t building_type[] = {
    {0, &base_setup},
    {1, &small_turret_setup},
    {2, &big_turret_setup},
    {3, &factory_setup},
    {(-1), NULL}
};

int building_type_determinator(building_t *elem, int ID, sfVector2f pos)
{
    for (int i = 0; building_type[i].ID > -1; i += 1) {
        if (ID == building_type[i].ID) {
            building_type[i].funcPointer(elem, pos);
            return (1);
        }
    }
    return (-1);
}