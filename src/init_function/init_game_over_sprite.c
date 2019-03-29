/*
** EPITECH PROJECT, 2019
** over
** File description:
** over
*/

#include "utils_defender.h"

void init_game_over_sprite(sprite_t *sprite)
{
    sprite[0] = create_sprite("backg_black.png",
    (sfVector2f){0, 0}, (sfVector2f){0, 0});
}