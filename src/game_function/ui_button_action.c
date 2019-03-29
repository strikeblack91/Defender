/*
** EPITECH PROJECT, 2019
** ui
** File description:
** ui
*/

#include "utils_defender.h"

int labo_button(scene_t *game, window_t *w)
{
    (void)w;
    if (game->index->money >= 2000) {
        game->index->index_ui = 4;
    }
    return (0);
}

int usine_button(scene_t *game, window_t *w)
{
    (void)w;

    if (game->index->money >= 2000) {
        game->index->index_ui = 3;
    }
    return (0);
}

int tower_two_button(scene_t *game, window_t *w)
{
    (void)w;

    if (game->index->money >= 1500) {
        game->index->index_ui = 2;
    }
    return (0);
}

int tower_one_button(scene_t *game, window_t *w)
{
    (void)w;

    if (game->index->money >= 500) {
        game->index->index_ui = 1;
    }
    return (0);
}