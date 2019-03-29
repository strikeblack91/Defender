/*
** EPITECH PROJECT, 2018
** MUL_my_defender_2018
** File description:
** init_random_seed.c
*/

#include "utils_defender.h"

void init_random_seed(void)
{
    int arr[100];
    int seed = 0;

    for (int i = 0; i < 100; i += 1) {
        seed += arr[i];
    }
    srand(seed);
}