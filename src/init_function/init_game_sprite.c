/*
** EPITECH PROJECT, 2019
** create
** File description:
** create
*/

#include "utils_defender.h"

void init_game_sprite(sprite_t *sprite)
{
    sprite[0] = create_sprite("backg_black.png", (sfVector2f){0, 0}, (sfVector2f){0, 0});
    sprite[1] = create_sprite("ui_bar_grey.png",
        (sfVector2f){0, 905}, (sfVector2f){0, 0});
    sprite[2] = create_sprite("src/building/small_turret.png",
        (sfVector2f){0, 0}, (sfVector2f){26, 26});
    sprite[3] = create_sprite("src/building/big_turret.png",
        (sfVector2f){0, 0}, (sfVector2f){50, 50});
    sprite[4] = create_sprite("src/building/factory.png",
        (sfVector2f){0, 0}, (sfVector2f){50, 50});
    sprite[5] = create_sprite("src/building/cross.png",
        (sfVector2f){0, 0}, (sfVector2f){20, 20});
    sprite[6] = create_sprite("src/game/medium_range.png",
    (sfVector2f){0, 0}, (sfVector2f){400, 400});
    sprite[7] = create_sprite("src/game/small_range.png",
    (sfVector2f){0, 0}, (sfVector2f){200, 200});
}