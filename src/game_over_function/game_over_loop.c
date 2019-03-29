/*
** EPITECH PROJECT, 2019
** over
** File description:
** over
*/

#include "utils_defender.h"

void update_score(text_t text, float time_survived)
{
    int score = time_survived;
    (void)score;

    sfText_setString(text.text,
        fusion("YOUR SCORE IS : ",
            (int_to_char(score))));
}

void draw_game_over(window_t *window, scene_t *game_over)
{
    sfRenderWindow_drawSprite(window->window,
    game_over->sprite[0].sprite, NULL);
    sfRenderWindow_drawText(window->window, game_over->text[0].text, NULL);
    sfRenderWindow_drawText(window->window, game_over->text[1].text, NULL);
    draw_buttons(window, game_over, 2);
}

int game_over_loop(window_t *window, float time_survived)
{
    scene_t *game_over = create_game_over();

    sfMusic_play(game_over->sound[2].music);
    update_score(game_over->text[1], time_survived);
    while (game_over->index->exit == 1) {
        event_game_over(window, game_over);
        if (game_over->index->menu == 1) {
            sfMusic_stop(game_over->sound[2].music);
            destroy_game_over(game_over);
            return (2);
        }
        is_button_menu_song(game_over, window, 0);
        is_button_menu_song(game_over, window, 1);
        draw_game_over(window, game_over);
        sfRenderWindow_display(window->window);
    }
    sfMusic_stop(game_over->sound[2].music);
    destroy_game_over(game_over);
    return (0);
}