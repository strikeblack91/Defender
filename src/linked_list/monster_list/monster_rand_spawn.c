/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** monster_rand_spawn.c
*/

#include "utils_defender.h"

sfVector2f monster_random_spawn(sfVector2i window_size)
{
    sfVector2f rdm_monst_pos = (sfVector2f){0, 0};

    int rdm_side = rand() % 4;
    switch (rdm_side) {
        case 0:
            rdm_monst_pos.x = rand() % window_size.x;
            rdm_monst_pos.y = 0 - 150; break;
        case 1:
            rdm_monst_pos.x = window_size.x + 100;
            rdm_monst_pos.y = rand() % window_size.y; break;
        case 2:
            rdm_monst_pos.x = rand() % (window_size.x);
            rdm_monst_pos.y = window_size.y; break;
        case 3:
            rdm_monst_pos.x = 0 - 150;
            rdm_monst_pos.y = rand() % window_size.y; break;
        default:
            break;
    }
    return (rdm_monst_pos);
}