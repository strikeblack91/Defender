/*
** EPITECH PROJECT, 2019
** game_loop
** File description:
** game_loop
*/

#include "utils_defender.h"

sfIntRect create_rect(int top, int left, int width, int height)
{
    sfIntRect element;

    element.top = top;
    element.left = left;
    element.width = width;
    element.height = height;
    return (element);
}