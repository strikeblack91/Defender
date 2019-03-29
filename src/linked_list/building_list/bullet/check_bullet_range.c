/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** bullet.c
*/

#include "utils_defender.h"

int is_in_range_and_loaded(building_t *building, monster_t *monster,
    float passing_time)
{
    float min_distance = 0.0;
    float index = passing_time - building->last_fire;

    if (index > 0.5 && (min_distance =
    calc_distance_monst_build(monster->sprite, building->building)) <=
    building->damage.y + (monster->sprite.size.x / 2)) {
        building->last_fire = passing_time;
        return (min_distance);
    }
    return (0);
}

monster_t *detect_nearest_monst(building_t *building,
    ll_monster_t *monster_list)
{
    float min_distance = 2000;
    float distance = 0.0;
    monster_t *target_monster = NULL;

    for (monster_t *temp_monster = monster_list->start; temp_monster != NULL;
    temp_monster = temp_monster->next) {
        distance = calc_distance_monst_build(temp_monster->sprite,
            building->building);
        if (distance < min_distance) {
            min_distance = distance;
            target_monster = temp_monster;
        }
    }
    return (target_monster);
}

void check_bullet_range(building_t *building, ll_monster_t *monster_list,
    float passing_time)
{
    float distance = 0.0;
    monster_t *target_monster = NULL;

    for (monster_t *temp_monster = monster_list->start; temp_monster != NULL;
    temp_monster = temp_monster->next) {
        if ((distance = is_in_range_and_loaded(building, temp_monster,
        passing_time)) != 0) {
            shoot(building, passing_time);
        }
    }
    if (building->list_bullet->start != NULL && monster_list->start != NULL) {
        target_monster = detect_nearest_monst(building, monster_list);
        if (update_bullet_list(building->list_bullet, target_monster,
        passing_time) == 1)
            pop_monster(monster_list, target_monster);
    }
}