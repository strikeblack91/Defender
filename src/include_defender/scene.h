/*
** EPITECH PROJECT, 2019
** scene.h
** File description:
** scene.h
*/

#ifndef SCENE_H_
#define SCENE_H_

#include "utils_defender.h"

//game object

typedef struct scene_s {
    text_t *text;
    index_t *index;
    button_t *button;
    sprite_t *sprite;
    sound_t *sound;
    ll_building_t *building_list;
    ll_monster_t *monster_list;
    sfClock *clock;
} scene_t;

#endif /* !SCENE_H_ */