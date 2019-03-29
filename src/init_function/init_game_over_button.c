/*
** EPITECH PROJECT, 2019
** init
** File description:
** init
*/

#include "utils_defender.h"

void init_game_over_button(button_t *button)
{
    button[0] = create_button("src/pause_menu/menu_unpressed.png",
    "src/pause_menu/menu_pressed.png", (sfVector2f){1300, 850},
    (sfVector2f){400, 100});
    button[0].callback = &menu_button;
    button[1] = create_button("src/main_menu/quit_unpressed.png",
    "src/main_menu/quit_pressed.png", (sfVector2f){1300, 650},
    (sfVector2f){400, 100});
    button[1].callback = &exit_button;
}