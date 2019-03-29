/*
** EPITECH PROJECT, 2019
** display_help.c
** File description:
** display_help.c
*/

#include "utils_defender.h"

int display_help(void)
{
    FILE *fd = NULL;
    char *final_text = "";
    char *line = NULL;
    size_t size = 0;

    if ((fd = fopen("./help", "r")) == 0)
        return (84);

    while (getline(&line, &size, fd) != -1) {
        final_text = fusion(final_text, line);
    }
    fclose(fd);
    my_printf("%s\n", final_text);
    return (1);
}