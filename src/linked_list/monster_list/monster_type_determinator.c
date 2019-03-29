/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** monster_type_determinator.c
*/

#include "utils_defender.h"

const monster_type_t monster_type[] = {
    {0, &minion_creator},
    {1, &mighty_monster_creator},
    {2, &the_boss_creator},
    {(-1), NULL}
};

int monster_type_determinator(monster_t *elem, int ID)
{
    for (int i = 0; monster_type[i].ID > -1; i += 1) {
        if (ID == monster_type[i].ID) {
            monster_type[i].funcPointer(elem);
            return (1);
        }
    }
    return (-1);
}