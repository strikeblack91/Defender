/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "utils_defender.h"

int program_loop(window_t *window , scene_t *menu)
{
    while (sfRenderWindow_isOpen(window->window)) {
        if (main_menu_loop(menu, window) == 0) {
            sfRenderWindow_destroy(window->window);
            return (0);
        }
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2 && str_n_comp(av[1], "-h", my_strlen("-h") == 1)) {
        display_help();
        return (0);
    }
    if (ac != 1)
        return (84);

    init_random_seed();
    window_t *window = init_window();
    scene_t *menu = create_main_menu();
    program_loop(window, menu);
    return (0);
}