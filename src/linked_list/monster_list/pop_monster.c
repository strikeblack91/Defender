/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** pop_monster.c
*/

#include "utils_defender.h"

void pop_monster_front(ll_monster_t *list)
{
    monster_t *temp = list->start;

    list->start = list->start->next;
    list->start->previous = NULL;
    temp->previous = NULL;
    temp->next = NULL;
    free(temp);
    temp = NULL;
}

void pop_monster_back(ll_monster_t *list)
{
    monster_t *temp = list->end;

    list->end = list->end->previous;
    list->end->next = NULL;
    temp->next = NULL;
    temp->previous = NULL;
    free(temp);
    temp = NULL;
}

void pop_monster_among(monster_t *monster)
{
    monster->previous->next = monster->next;
    monster->next->previous = monster->previous;
    monster->next = NULL;
    monster->previous = NULL;
    free(monster);
    monster = NULL;
}

void pop_monster_pos_determinator(ll_monster_t *list, monster_t *monster)
{
    if (monster == list->start)
        pop_monster_front(list);
    else if (monster == list->end)
        pop_monster_back(list);
    else
        pop_monster_among(monster);
}

void pop_monster(ll_monster_t *list, monster_t *monster)
{
    if (list->start == NULL)
        return;

    if (list->ll_size == 1) {
        free(list->start);
        list->start = NULL;
        list->end = NULL;
    } else {
        pop_monster_pos_determinator(list, monster);
    }
    list->ll_size -= 1;
}