/*
** EPITECH PROJECT, 2019
** pause
** File description:
** pause
*/

#include "utils_defender.h"

void button_manager(window_t *window, scene_t *pause)
{
    is_button_menu_song(pause, window, 0);
    is_button_menu_song(pause, window, 1);
    is_button_menu_song(pause, window, 2);
    draw_button(pause->button[0], window);
    draw_button(pause->button[1], window);
    draw_button(pause->button[2], window);
}

int menu_pause_loop(window_t *window)
{
    scene_t *pause = create_pause_menu();

    while (pause->index->exit == 1) {
        event_pause(window, pause);
        button_manager(window, pause);
        sfRenderWindow_display(window->window);
        if (pause->index->menu == 1) {
            destroy_pause_menu(pause);
            return (2);
        }
        if (pause->index->resume == 1) {
            destroy_pause_menu(pause);
            return (1);
        }
    }
    destroy_pause_menu(pause);
    return (0);
}