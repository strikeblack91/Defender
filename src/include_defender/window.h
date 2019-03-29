/*
** EPITECH PROJECT, 2019
** window.h
** File description:
** window.h
*/

#ifndef WINDOW_H_
#define WINDOW_H_

#include "utils_defender.h"

typedef struct window_s {
    sfRenderWindow *window;
    sfEvent event;
} window_t;

#endif /* !WINDOW_H_ */