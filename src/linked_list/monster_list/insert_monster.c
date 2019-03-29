/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** insert_monster.c
*/

#include "utils_defender.h"

ll_monster_t *insert_monster(ll_monster_t *list, int ID)
{
    monster_t *elem = malloc(sizeof(monster_t));

    if (elem == NULL)
        return (list);
    elem->id = 0;
    elem->damage = 0;
    elem->health = 0;
    elem->next = NULL;
    elem->previous = NULL;
    if (monster_type_determinator(elem, ID) == -1) {
        free(elem);
        return (list);
    }
    insert_monster_pos_determinator(list, elem);
    list->ll_size += 1;
    return (list);
}