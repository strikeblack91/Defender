/*
** EPITECH PROJECT, 2019
** over
** File description:
** over
*/

#include "utils_defender.h"

void init_game_over_text(text_t *text)
{
    text[0] = create_text("src/game/AldotheApache.ttf",
    "GAME OVER", (sfVector2f){500, 400}, (sfVector2f){3, 3});
    text[1] = create_text("src/game/AldotheApache.ttf",
    "YOUR SCORE IS : 0", (sfVector2f){500, 600}, (sfVector2f){2, 2});
}