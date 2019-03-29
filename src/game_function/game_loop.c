/*
** EPITECH PROJECT, 2019
** game_loop
** File description:
** game_loop
*/

#include "utils_defender.h"

void is_end(window_t *window, scene_t *game, float time_survived)
{
    if (game->building_list->start == NULL ||
    game->building_list->start->id != 0) {
        sfMusic_stop(game->sound[0].music);
        game->index->exit = game_over_loop(window, time_survived);
    }
}

void money_mining(ll_building_t *building_list, index_t *index,
    float passing_time, float *last_call_money)
{
    int mine_counter = 0;

    if (passing_time - *last_call_money > 5 && building_list->start != NULL) {
        for (building_t *temp_build = building_list->start; temp_build != NULL;
        temp_build = temp_build->next) {
            if (temp_build->id == 3) {
                mine_counter += 1;
            }
        }
        *last_call_money = passing_time;
    }
    index->money += (mine_counter * 200);
}

void base_animation(building_t *base)
{
    int next_image = 100;
    int max_value_s = 700;

    base->anim.left += next_image;
    if (base->anim.left > max_value_s)
        base->anim.left = 0;
    sfSprite_setTextureRect(base->building.sprite, base->anim);
}

void update_game_state(scene_t *game, window_t *window, float last_call,
    float *last_call_money)
{
    float passing_time = sfClock_getElapsedTime(game->clock).microseconds /
        1000000.0;

    if (passing_time > 0.09 && game->building_list->start != NULL &&
        game->building_list->start->id == 0)
        base_animation(game->building_list->start);
    create_monster(game, last_call, passing_time);
    money_mining(game->building_list, game->index,
        passing_time, last_call_money);
    event_game(window, game);
    draw_game_sprites(window, game);
    sfRenderWindow_display(window->window);
    is_end(window, game, passing_time);
}

int game_loop(window_t *window)
{
    scene_t *game = create_game();
    sfClock_restart(game->clock);
    static float last_call = -21;
    float last_call_money = 0.0;

    sfMusic_play(game->sound[0].music);
    while (game->index->exit == 1) {
        update_game_state(game, window, last_call, &last_call_money);
        if (game->index->exit == 2) {
            destroy_game(game);
            return (2);
        }
    }
    destroy_game(game);
    return (0);
}