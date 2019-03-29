/*
** EPITECH PROJECT, 2019
** menu
** File description:
** menu
*/

#include "utils_defender.h"

void update_index(window_t *window, scene_t *menu, int *index)
{
    if (menu->index->start == 1) {
        sfMusic_stop(menu->sound[2].music);
        *index = game_loop(window);
        sfMusic_play(menu->sound[2].music);
        if (*index == 0)
            menu->index->exit = 0;
        if (*index == 2)
            menu->index->start = 0;
        }
}

int main_menu_loop(scene_t *menu, window_t *window)
{
    int index;

    sfMusic_play(menu->sound[2].music);
    while (menu->index->exit == 1) {
        event_menu(window, menu);
        sfRenderWindow_drawSprite(window->window,
            menu->sprite[0].sprite, NULL);
        is_button_menu_song(menu, window, 0);
        is_button_menu_song(menu, window, 1);
        draw_button(menu->button[0], window);
        draw_button(menu->button[1], window);
        sfRenderWindow_display(window->window);
        update_index(window, menu, &index);
    }
    destroy_main_menu(menu);
    return (0);
}