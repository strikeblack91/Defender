/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** create_monster.c
*/

#include "utils_defender.h"

void create_monster(scene_t *game, float last_call, float passing_time)
{
    if (game->building_list->start != NULL &&
    game->monster_list->start == NULL) {
        if (passing_time - last_call >= 20 &&
        game->monster_list->ll_size < 10) {
            for (int i = 0; i < game->index->level * 20; i += 1)
                insert_monster(game->monster_list, rand() % 2);
            for (int i = 0; game->index->level > 3 && i < game->index->level * 5; i += 1)
                insert_monster(game->monster_list, rand() % 3);
            last_call = passing_time;
            game->index->level += 1;
            game->index->money += 2000;
        }
    }
}