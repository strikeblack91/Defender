/*
** EPITECH PROJECT, 2019
** init_button
** File description:
** init_button
*/

#include "utils_defender.h"

void init_main_menu_button(button_t *button)
{
    button[0] = create_button("src/main_menu/start_unpressed.png",
        "src/main_menu/start_pressed.png", (sfVector2f){750, 450},
        (sfVector2f){400, 100});
    button[0].callback = &start_button;
    button[1] = create_button("src/main_menu/quit_unpressed.png",
        "src/main_menu/quit_pressed.png", (sfVector2f){750, 650},
        (sfVector2f){400, 100});
    button[1].callback = &exit_button;
}