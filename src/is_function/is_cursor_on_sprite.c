/*
** EPITECH PROJECT, 2019
** is_cursor_on_sprite
** File description:
** is_cursor_on_sprite
*/

#include "utils_defender.h"

int is_cursor_on_sprite(sfSprite *sprite, sfVector2f size_s, window_t *w)
{
    sfVector2f pos_s = sfSprite_getPosition(sprite);
    sfVector2i pos_m = sfMouse_getPositionRenderWindow(w->window);

    if (pos_s.x < pos_m.x && pos_m.x < pos_s.x + size_s.x
            && pos_s.y < pos_m.y && pos_m.y < pos_s.y + size_s.y)
            return (1);
    return (0);
}