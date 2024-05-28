/*
** EPITECH PROJECT, 2024
** free double char
** File description:
** new func
*/

#include <stdlib.h>

void free_array(char **str)
{
    for (int y = 0; str[y] != 0; y++)
        free(str[y]);
    free(str);
}
