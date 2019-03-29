/*
** EPITECH PROJECT, 2019
** draw
** File description:
** draw
*/

#include "utils_defender.h"

void draw_linked_list_elements(window_t *window, scene_t *game)
{
    for (building_t *temp_building = game->building_list->start;
    temp_building != NULL; temp_building = temp_building->next) {
        check_bullet_range(temp_building, game->monster_list,
            sfClock_getElapsedTime(game->clock).microseconds / 1000000.0);
        sfRenderWindow_drawSprite(window->window,
            temp_building->building.sprite, NULL);
        for (bullet_t *temp_bullet = temp_building->list_bullet->start;
        temp_bullet != NULL; temp_bullet = temp_bullet->next) {
            sfRenderWindow_drawSprite(window->window,
            temp_bullet->sprite.sprite, NULL);
        }
    }
    for (monster_t *temp_monster = game->monster_list->start;
    temp_monster != NULL; temp_monster = temp_monster->next)
    {
        monster_pos_update(temp_monster, game->building_list,
            sfClock_getElapsedTime(game->clock).microseconds / 1000000.0);
        sfRenderWindow_drawSprite(window->window,
            temp_monster->sprite.sprite, NULL);
    }
}