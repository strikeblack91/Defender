/*
** EPITECH PROJECT, 2019
** function_pointers.c
** File description:
** function_pointers.c
*/

#include "utils_defender.h"

void base_setup(building_t *elem, sfVector2f pos)
{
    elem->id = 0;
    elem->damage = (sfVector2i){100, 300};
    elem->bullet_speed = 5.0;
    elem->health = 1000;
    elem->last_fire = 0;
    elem->loaded = true;
    elem->building = create_sprite("src/building/main_base_anim.png",
        (sfVector2f){pos.x - 50, pos.y - 50}, (sfVector2f){100, 100});
    elem->list_bullet = init_bullet_list();
    elem->anim = create_rect(0, 0, 100, 100);
    sfSprite_setTextureRect(elem->building.sprite, elem->anim);
}

void small_turret_setup(building_t *elem, sfVector2f pos)
{
    elem->id = 1;
    elem->damage = (sfVector2i){30, 100};
    elem->bullet_speed = 20.0;
    elem->health = 100;
    elem->last_fire = 0;
    elem->loaded = true;
    elem->building = create_sprite("src/building/small_turret.png",
        (sfVector2f){pos.x - 13, pos.y - 13}, (sfVector2f){26, 26});
    elem->list_bullet = init_bullet_list();
}

void big_turret_setup(building_t *elem, sfVector2f pos)
{
    elem->id = 2;
    elem->damage = (sfVector2i){60, 200};
    elem->bullet_speed = 10.0;
    elem->health = 200;
    elem->last_fire = 0;
    elem->loaded = true;
    elem->building = create_sprite("src/building/big_turret.png",
        (sfVector2f){pos.x - 25, pos.y - 25}, (sfVector2f){50, 50});
    elem->list_bullet = init_bullet_list();
}

void factory_setup(building_t *elem, sfVector2f pos)
{
    elem->id = 3;
    elem->health = 50;
    elem->last_fire = 0;
    elem->loaded = true;
    elem->building = create_sprite("src/building/factory.png",
        (sfVector2f){pos.x - 25, pos.y - 25}, (sfVector2f){50, 50});
    elem->list_bullet = init_bullet_list();
}