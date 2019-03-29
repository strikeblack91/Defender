/*
** EPITECH PROJECT, 2019
** create_game
** File description:
** create_game
*/

#include "utils_defender.h"

index_t *init_index_game(void)
{
    index_t *index = malloc(sizeof(index_t));

    index->index_ui = 0;
    index->exit = 1;
    index->level = 0;
    index->money = 5000;
    return (index);
}

scene_t *create_game(void)
{
    scene_t *element = malloc(sizeof(scene_t) * 1);

    element->index = init_index_game();
    element->text = malloc(sizeof(text_t) * 6);
    element->sprite = malloc(sizeof(sprite_t) * 8);
    element->button = malloc(sizeof(button_t) * 4);
    element->sound = malloc(sizeof(sound_t) * 1);
    element->clock = sfClock_create();
    element->index->index_placement = 0;
    element->building_list = init_building_list();
    element->monster_list = init_monster_list();
    init_game_sound(element->sound);
    init_game_button(element->button);
    init_game_sprite(element->sprite);
    init_game_text(element->text);
    return (element);
}