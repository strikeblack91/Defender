/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** circle_circle_collision.c
*/

#include "utils_defender.h"

int check_collision(sfVector2f spr1_pos, sfVector2f spr1_size,
    sfVector2f mouse_pos, float radius_sprite)
{
    return (((sqrt(pow(((spr1_pos.x + spr1_size.x / 2) - mouse_pos.x), 2) +
        pow(((spr1_pos.y + spr1_size.y / 2) - mouse_pos.y), 2)) <
        (spr1_size.x / 2) + radius_sprite)) ? 1 : 0);
}

int is_collision(ll_building_t *building_list, ll_monster_t *monster_list,
    sfVector2f mouse_pos, float radius_spr)
{
    sfVector2f spr1_pos;
    for (building_t *temp1 = building_list->start; temp1 != NULL;
    temp1 = temp1->next) {
        spr1_pos = sfSprite_getPosition(temp1->building.sprite);
        if (check_collision(spr1_pos, temp1->building.size, mouse_pos,
        radius_spr) == 1)
            return (1);
        for (monster_t *temp2 = monster_list->start; temp2 != NULL;
        temp2 = temp2->next) {
        spr1_pos = sfSprite_getPosition(temp2->sprite.sprite);
            if (check_collision(spr1_pos, temp2->sprite.size, mouse_pos,
            radius_spr) == 1)
                return (1);
            }
        }
        return (0);
}

int check_building_placement(window_t *window, scene_t *scene, int ID_building)
{
    sfVector2f mouse_pos =
        (sfVector2f){sfMouse_getPositionRenderWindow(window->window).x,
        sfMouse_getPositionRenderWindow(window->window).y};

    switch (ID_building) {
        case 1:
            if (is_collision(scene->building_list,
            scene->monster_list, mouse_pos, 13) == 1)
                return (0); break;
        case 2:
            if (is_collision(scene->building_list,
            scene->monster_list, mouse_pos, 25) == 1)
                return (0); break;
        case 3:
            if (is_collision(scene->building_list,
            scene->monster_list, mouse_pos, 25) == 1)
                return (0); break;
        default: break;
    }
    return (1);
}