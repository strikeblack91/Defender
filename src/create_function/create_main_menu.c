/*
** EPITECH PROJECT, 2019
** create
** File description:
** create
*/

#include "utils_defender.h"

scene_t *create_main_menu(void)
{
    scene_t *element = malloc(sizeof(scene_t) * 1);

    element->index = malloc(sizeof(index_t));
    element->index->exit = 1;
    element->index->start = 0;
    element->button = malloc(sizeof(button_t) * 2);
    element->sprite = malloc(sizeof(sprite_t) * 1);
    element->sound = malloc(sizeof(sound_t) * 3);

    init_main_menu_sprite(element->sprite);
    init_main_menu_button(element->button);
    init_main_menu_sound(element->sound);
    return (element);
}