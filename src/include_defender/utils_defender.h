/*
** EPITECH PROJECT, 2019
** utils
** File description:
** utils
*/

#ifndef UTILS_H_
#define UTILS_H_

#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <math.h>

#include "window.h"
#include "index.h"
#include "button.h"
#include "sprite.h"
#include "sound.h"
#include "menu.h"
#include "linked_list_building.h"
#include "linked_list_monster.h"
#include "text.h"
#include "scene.h"


// - display_help.c
int display_help(void);


// - LIB
char *get_next_line(int fd);
void my_printf(char *s, ...);


// - is_function
int is_cursor_on_sprite(sfSprite *sprite, sfVector2f size_s, window_t *w);
void is_button_menu_song(scene_t *menu , window_t *window, int index);


// - init_function
window_t *init_window(void);
void init_random_seed(void);
void init_main_menu_button(button_t *button);
void init_main_menu_sprite(sprite_t *sprite);
void init_main_menu_sound(sound_t *sound);
void init_game_sprite(sprite_t *sprite);
void init_pause_menu_button(button_t *button);
void init_pause_menu_sound(sound_t *sound);
void init_game_button(button_t *button);
void init_game_text(text_t *text);
void init_game_over_button(button_t *button);
void init_game_over_sprite(sprite_t *sprite);
void init_game_over_sound(sound_t *sound);
void init_game_over_text(text_t *text);


// - collision_management
int check_building_placement(window_t *window, scene_t *scene,
    int ID_building);


// - button_action.c
int exit_button(scene_t *menu, window_t *w);
int start_button(scene_t *menu, window_t *w);
int resume_button(scene_t *menu, window_t *w);
int menu_button(scene_t *menu, window_t *w);
int tower_one_button(scene_t *game, window_t *w);
int usine_button(scene_t *game, window_t *w);
int labo_button(scene_t *game, window_t *w);
int tower_two_button(scene_t *game, window_t *w);


// - main_menu_function
scene_t *create_main_menu(void);
void event_menu(window_t *w, scene_t *menu);
int main_menu_loop(scene_t *menu, window_t *window);
void draw_button(button_t b, window_t *window);


// - game_function
int game_loop(window_t *window);
void event_game(window_t *window, scene_t *game);
void draw_building_selected(window_t *window, scene_t *game);
void draw_linked_list_elements(window_t *window, scene_t *game);
void draw_buttons(window_t *window, scene_t *game, int index);
void draw_game_sprites(window_t *window, scene_t *game);
void draw_ui_information(window_t *window, scene_t *game);
void check_bullet_range(building_t *building, ll_monster_t *monster_list,
    float passing_time);
void init_game_sound(sound_t *sound);


// - utils
char *fusion(char *dest, char *src);
int my_getnbr(char const *str);
int str_n_comp(char const *s1, char const *s2, int length);
char *strcopy(char *str);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
char *int_to_char(int number);


// - create_function
button_t create_button(char *b_unpressed, char *b_pressed,
    sfVector2f position, sfVector2f size);
sound_t create_sound(char *path, float volume, sfBool repeat);
sprite_t create_sprite(char *path, sfVector2f position, sfVector2f size);
scene_t *create_game(void);
scene_t *create_pause_menu(void);
text_t create_text(char *path, char *str, sfVector2f position,
    sfVector2f scale);
void create_monster(scene_t *game, float last_call,
    float passing_time);
    scene_t *create_game_over(void);
    sfIntRect create_rect(int top, int left, int width, int height);


// - pause_menu_function
void event_pause(window_t *window, scene_t *pause);
int menu_pause_loop(window_t *window);
void button_pause_event(window_t *w, scene_t *menu);

// - MATH
float calc_distance_monst_build(sprite_t monster, sprite_t building);
sfVector2f calc_direction(sprite_t monster, sprite_t building, float distance);

// game_over_function
int game_over_loop(window_t *window, float time);
void game_over_interaction(window_t *window, scene_t *game);
void event_game_over(window_t *window, scene_t *game_over);
void update_score(text_t text, float time_survived);


void shoot(building_t *building, float passing_time);
int update_bullet_list(ll_bullet_t *list_bullet, monster_t *monster,
    float passing_time);

// - destroy functions
void destroy_list_bullet(ll_bullet_t *list_bullet);
void pop_monster(ll_monster_t *list, monster_t *monster);
void destroy_game(scene_t *game);
void destroy_game_over(scene_t *game);
void destroy_sound(sound_t *sound, int index);
void destroy_main_menu(scene_t *game);
void destroy_pause_menu(scene_t *game);
#endif /* !UTILS_H_ */