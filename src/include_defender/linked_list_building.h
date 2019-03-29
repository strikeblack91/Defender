/*
** EPITECH PROJECT, 2019
** linked_list_building.h
** File description:
** linked_list_building.h
*/

#ifndef LINKED_LIST_BUILDING_H_
#define LINKED_LIST_BUILDING_H_

#include "utils_defender.h"

typedef struct bullet_s {
    sfVector2f pos;
    int damage;
    float speed;
    sprite_t sprite;
    float shot_time;
    struct bullet_s *next;
    struct bullet_s *previous;
} bullet_t;

typedef struct ll_bullet_s {
    int size;
    bullet_t *start;
    bullet_t *end;
} ll_bullet_t;

typedef struct building_s {
    int id;
    int health;

    ll_bullet_t *list_bullet;
    float last_fire;
    bool loaded;
    sfVector2i damage;
    float bullet_speed;

    sprite_t building;
    struct building_s *next;
    struct building_s *previous;

    sfIntRect anim;
} building_t;

typedef struct linked_list_building_s {
    int ll_size;
    building_t *start;
    building_t *end;
} ll_building_t;

typedef struct building_type_s {
    int ID;
    void (*funcPointer)(building_t *, sfVector2f);
} building_type_t;

ll_building_t *init_building_list(void);

ll_building_t *insert_building(ll_building_t *list, int ID, sfVector2f pos);
void insert_building_poslist_determinator(ll_building_t *list,
    building_t *elem);

// ll_building_t *pop_element_at(ll_building_t *list, int index);
void pop_front(ll_building_t *list);

void push_front(ll_building_t *list, building_t *elem);
void push_back(ll_building_t *list, building_t *elem);
void detect_position(ll_building_t *list, building_t *elem, int index);

int building_type_determinator(building_t *elem, int ID, sfVector2f pos);

// - function_pointers
void base_setup(building_t *elem, sfVector2f pos);
void small_turret_setup(building_t *elem, sfVector2f pos);
void big_turret_setup(building_t *elem, sfVector2f pos);
void factory_setup(building_t *elem, sfVector2f pos);

// - bullet
ll_bullet_t *init_bullet_list(void);
bullet_t *init_bullet(sfVector2f pos, int damage, int speed, float shot_time);

void pop_building(ll_building_t *list, building_t *building);

#endif /* !LINKED_LIST_BUILDINGS_H_ */