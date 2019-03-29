/*
** EPITECH PROJECT, 2019
** over
** File description:
** over
*/

#include "utils_defender.h"

scene_t *create_game_over(void)
{
    scene_t *element = malloc(sizeof(scene_t) * 1);

    element->sprite = malloc(sizeof(sprite_t) * 1);
    element->index = malloc(sizeof(index_t));
    element->button = malloc(sizeof(button_t) *2);
    element->sound = malloc (sizeof(sound_t) * 3);
    element->text = malloc (sizeof(text_t) * 2);
    element->index->exit = 1;
    element->index->menu = 0;
    init_game_over_text(element->text);
    init_game_over_sound(element->sound);
    init_game_over_button(element->button);
    init_game_over_sprite(element->sprite);
    return (element);
}