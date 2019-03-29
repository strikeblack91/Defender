/*
** EPITECH PROJECT, 2019
** get
** File description:
** get
*/

#include "utils_defender.h"

sfVector2f get_direction(sfVector2f from_vector, sfVector2f to_vector)
{
    sfVector2f direction;
    float length_vector = sqrt((pow(to_vector.x - from_vector.x, 2) +
        pow(to_vector.y - from_vector.y, 2)));

    direction.x = (to_vector.x - from_vector.x) / length_vector;
    direction.y = (to_vector.y - from_vector.y) / length_vector;
    return (direction);
}