/*
** EPITECH PROJECT, 2024
** array len
** File description:
** new func
*/

#include "base.h"

size_t array_strlen(const char **array)
{
    size_t count = 0;

    for (size_t y = 0; array[y] != 0; ++y)
        count += my_strlen(array[y]);
    return count;
}
