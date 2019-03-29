/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** monster_pos_update.c
*/

#include "utils_defender.h"

void monster_inflict_damage(building_t *target, monster_t *monster,
    float passing_time)
{
    if (passing_time - monster->last_hit >= monster->rate_hit) {
        target->health -= monster->damage;
        monster->last_hit = passing_time;
    }
}

void check_monster_action(monster_t *monster, ll_building_t *building_list,
    building_t *target_build, sfVector2f comp)
{
    sfVector2f direction = calc_direction(monster->sprite,
        target_build->building, comp.x);

    if (comp.x > (target_build->building.size.x / 2 +
    monster->sprite.size.x / 2)) {
        sfSprite_move(monster->sprite.sprite, (sfVector2f){
            direction.x * monster->speed, direction.y * monster->speed});
    } else {
        monster_inflict_damage(target_build, monster, comp.y);
    }
    if (target_build->health <= 0) {
        pop_building(building_list, target_build);
    }
}

void monster_pos_update(monster_t *monster, ll_building_t *building_list,
    float passing_time)
{
    float distance = 0;
    float distance_min = 0;
    int i = 0;
    building_t *target_build = NULL;

    for (building_t *temp_building = building_list->start;
    temp_building != NULL; temp_building = temp_building->next, i += 1) {
        distance = calc_distance_monst_build(monster->sprite,
        temp_building->building);
        if (distance < distance_min || i == 0) {
            distance_min = distance;
            target_build = temp_building;
        }
    }
    if (target_build == NULL)
        return;
    check_monster_action(monster, building_list, target_build,
        (sfVector2f){distance_min, passing_time});
}