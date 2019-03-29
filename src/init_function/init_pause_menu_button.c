/*
** EPITECH PROJECT, 2019
** pause
** File description:
** pause
*/

#include "utils_defender.h"

void init_pause_menu_button(button_t *button)
{
    button[0] = create_button("src/pause_menu/resume_unpressed.png",
        "src/pause_menu/resume_pressed.png", (sfVector2f){750, 250},
        (sfVector2f){400, 100});
    button[0].callback = &resume_button;
    button[1] = create_button("src/pause_menu/menu_unpressed.png",
        "src/pause_menu/menu_pressed.png", (sfVector2f){750, 450},
        (sfVector2f){400, 100});
    button[1].callback = &menu_button;
    button[2] = create_button("src/main_menu/quit_unpressed.png",
        "src/main_menu/quit_pressed.png", (sfVector2f){750, 650},
        (sfVector2f){400, 100});
    button[2].callback = &exit_button;
}