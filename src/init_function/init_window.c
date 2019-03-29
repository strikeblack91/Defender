/*
** EPITECH PROJECT, 2019
** init_window
** File description:
** init_window
*/

#include "utils_defender.h"

sfRenderWindow *create_window(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = 1920;
    video_mode.height = 1080;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "RPG",
        sfDefaultStyle, NULL);
    return (window);
}

window_t *init_window(void)
{
    window_t *element = malloc(sizeof(window_t));

    element->window = create_window();
    sfRenderWindow_setFramerateLimit(element->window, 30);
    sfRenderWindow_setVerticalSyncEnabled(element->window, sfTrue);
    return (element);
}