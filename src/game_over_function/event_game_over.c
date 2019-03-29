/*
** EPITECH PROJECT, 2019
** over
** File description:
** over
*/

#include "utils_defender.h"

void event_game_over(window_t *window, scene_t *game_over)
{
    while (sfRenderWindow_pollEvent(window->window, &window->event)) {
        if (window->event.type == sfEvtClosed) {
            game_over->index->exit = 0;
            sfRenderWindow_close(window->window);
        }
        if (window->event.type == sfEvtMouseButtonPressed)
            game_over_interaction(window, game_over);
    }
}