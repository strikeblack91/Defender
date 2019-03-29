/*
** EPITECH PROJECT, 2019
** event
** File description:
** event
*/

#include "utils_defender.h"

void event_pause(window_t *window, scene_t *pause)
{
    while (sfRenderWindow_pollEvent(window->window, &window->event)) {
        if (window->event.type == sfEvtClosed) {
            pause->index->exit = 0;
            sfRenderWindow_close(window->window);
        }
        if (sfMouse_isButtonPressed(sfMouseLeft))
            button_pause_event(window, pause);
    }
}