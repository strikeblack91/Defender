/*
** EPITECH PROJECT, 2019
** game
** File description:
** game
*/

#include "utils_defender.h"

void init_game_button(button_t *button)
{
    button[0] = create_button("black_button.png", "temp_pressed.png",
        (sfVector2f){200, 920}, (sfVector2f){200, 100});
    button[0].callback = &tower_one_button;
    button[1] = create_button("black_button.png", "temp_pressed.png",
        (sfVector2f){600, 920}, (sfVector2f){200, 100});
    button[1].callback = &tower_two_button;
    button[2] = create_button("black_button.png", "temp_pressed.png",
        (sfVector2f){1000, 920}, (sfVector2f){200, 100});
    button[2].callback = &usine_button;
}