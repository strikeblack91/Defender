/*
** EPITECH PROJECT, 2019
** button action
** File description:
** button action
*/

#include "utils_defender.h"

int exit_button(scene_t *menu, window_t *w)
{
    (void)w;

    menu->index->exit = 0;
    return (0);
}

int start_button(scene_t *menu, window_t *w)
{
    (void)w;

    menu->index->start = 1;
    return (0);
}

int resume_button(scene_t *menu, window_t *w)
{
    menu->index->resume = 1;
    (void)w;
    return (0);
}

int menu_button(scene_t *menu, window_t *w)
{
    (void)w;
    menu->index->menu = 1;
    return (0);
}