/*
** EPITECH PROJECT, 2024
** get_index_in_array
** File description:
** new
*/

#include <stddef.h>
#include <string.h>
#include "base.h"

size_t get_index_in_array(const char *str, const char **array)
{
    for (size_t y = 0; array[y] != 0; ++y)
        if (my_strcmp(array[y], str) == 0)
            return y;
    return 0;
}
