/*
** EPITECH PROJECT, 2019
** init
** File description:
** init
*/

#include "utils_defender.h"

void init_game_text(text_t *text)
{
    text[0] = create_text("src/game/AldotheApache.ttf",
        "Base Health Points : 500/500", (sfVector2f){1400, 925},
        (sfVector2f){1, 1});
    text[1] = create_text("src/game/AldotheApache.ttf", "Money : 0",
        (sfVector2f){1400, 955}, (sfVector2f){1, 1});
    text[2] = create_text("src/game/AldotheApache.ttf",
        "SMALL TURRET\n\nPRICE : 500",
        (sfVector2f){220, 925}, (sfVector2f){1, 1});
    text[3] = create_text("src/game/AldotheApache.ttf",
        "BIG TURRET\n\nPRICE : 1500",
        (sfVector2f){635, 925}, (sfVector2f){1, 1});
    text[4] = create_text("src/game/AldotheApache.ttf",
        "  FACTORY\n\nPRICE : 2000",
        (sfVector2f){1038, 925}, (sfVector2f){1, 1});
    text[5] = create_text("src/game/AldotheApache.ttf",
        "WAVE : 0",
        (sfVector2f){1400, 985}, (sfVector2f){1, 1});
}