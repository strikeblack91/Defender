/*
** EPITECH PROJECT, 2019
** init_sprite
** File description:
** init_sprite
*/

#include "utils_defender.h"

void init_main_menu_sprite(sprite_t *sprite)
{
    sprite[0] = create_sprite("src/main_menu/background.png",
        (sfVector2f){0, 0}, (sfVector2f){1920, 1080});
}