/*
** EPITECH PROJECT, 2019
** event
** File description:
** event
*/

#include "utils_defender.h"

void button_event(window_t *w, scene_t *menu)
{
    for (int i = 0; i < 2; i++) {
        if (is_cursor_on_sprite(menu->button[i].sprite0 ,
        menu->button[i].size, w) == 1)
            menu->button[i].callback(menu, w);
    }
}

void event_menu(window_t *w, scene_t *menu)
{
    while (sfRenderWindow_pollEvent(w->window, &w->event)) {
        if (w->event.type == sfEvtClosed) {
            sfRenderWindow_close(w->window);
            menu->index->exit = 0;
        }
        if (sfMouse_isButtonPressed(sfMouseLeft))
            button_event(w, menu);
    }
}