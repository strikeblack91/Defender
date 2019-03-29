/*
** EPITECH PROJECT, 2019
** linked_list_monster.h
** File description:
** linked_list_monster.h
*/

#ifndef LINKED_LIST_MONSTER_H_
#define LINKED_LIST_MONSTER_H_

#include "utils_defender.h"

typedef struct monster_s {
    int id;
    int health;
    int damage;
    float rate_hit;
    float last_hit;
    float speed;
    sprite_t sprite;
    struct monster_s *next;
    struct monster_s *previous;
} monster_t;

typedef struct linked_list_monster_s {
    int ll_size;
    monster_t *start;
    monster_t *end;
} ll_monster_t;

typedef struct monster_type_s {
    int ID;
    void (*funcPointer)(monster_t *);
} monster_type_t;

// --- init_monster.c
ll_monster_t *init_monster_list(void);

// --- insert_monster.c
ll_monster_t *insert_monster(ll_monster_t *list, int ID);

// --- monster_type_determinator.c
int monster_type_determinator(monster_t *elem, int ID);

// --- monster_function_pointer.c
void minion_creator(monster_t *elem);
void mighty_monster_creator(monster_t *elem);
void the_boss_creator(monster_t *elem);

// --- pos_determinator.c
void insert_monster_pos_determinator(ll_monster_t *list, monster_t *elem);

// --- function_pointer.c
void detect_monster_pop_position(ll_monster_t *list, int index);
void pop_monster_temp(monster_t *temp);
void pop_monster_back(ll_monster_t *list);
void pop_monster_front(ll_monster_t *list);

sfVector2f monster_random_spawn(sfVector2i window_size);
void monster_pos_update(monster_t *monster, ll_building_t *building_list,
    float passing_time);

void destroy_building_monster_list(ll_building_t *build_list,
    ll_monster_t *monst_list);

#endif /* !LINKED_LIST_MONSTER_H_ */