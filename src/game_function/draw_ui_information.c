/*
** EPITECH PROJECT, 2019
** draw
** File description:
** draw
*/

#include "utils_defender.h"

void draw_base_life(window_t *window, text_t text,
    ll_building_t *building_list)
{
    if (building_list->start == NULL) {
        sfText_setString(text.text, fusion("BASE HEALTH POINTS : ",
        fusion("0", "/1000")));
    } else {
        sfText_setString(text.text, fusion("BASE HEALTH POINTS : ",
        fusion(int_to_char(building_list->start->health), "/1000")));
    }
    sfRenderWindow_drawText(window->window, text.text, NULL);
}

void draw_money(window_t *window, text_t text, int money)
{
    sfText_setString(text.text, fusion("GOLD : ", int_to_char(money)));
    sfRenderWindow_drawText(window->window, text.text, NULL);
}

void draw_wave_survived(window_t *window, text_t text, int wave)
{
    sfText_setString(text.text, fusion("WAVE : ", int_to_char(wave - 1)));
    sfRenderWindow_drawText(window->window, text.text, NULL);
}

void draw_ui_information(window_t *window, scene_t *game)
{
    draw_base_life(window, game->text[0], game->building_list);
    draw_money(window, game->text[1], game->index->money);
    draw_wave_survived(window, game->text[5], game->index->level);
    sfRenderWindow_drawText(window->window, game->text[2].text, NULL);
    sfRenderWindow_drawText(window->window, game->text[3].text, NULL);
    sfRenderWindow_drawText(window->window, game->text[4].text, NULL);
}