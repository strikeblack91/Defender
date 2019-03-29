/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** destroy_list_bullet.c
*/

#include "utils_defender.h"

void destroy_list_bullet(ll_bullet_t *list_bullet)
{
    bullet_t *deleter = NULL;

    for (bullet_t *temp = list_bullet->start; temp != NULL; ) {
        deleter = temp;
        temp = temp->next;
        deleter->previous = NULL;
        deleter->next = NULL;
        deleter = NULL;
    }
}