/*
** EPITECH PROJECT, 2019
** pause
** File description:
** pause
*/

#include "utils_defender.h"

scene_t *create_pause_menu(void)
{
    scene_t *element = malloc(sizeof(scene_t) * 1);

    element->index = malloc(sizeof(index_t));
    element->index->exit = 1;
    element->index->resume = 0;
    element->index->menu = 0;
    element->button = malloc(sizeof(button_t) * 3);
    element->sound = malloc(sizeof(sound_t) * 3);

    init_pause_menu_button(element->button);
    init_pause_menu_sound(element->sound);
    return (element);
}