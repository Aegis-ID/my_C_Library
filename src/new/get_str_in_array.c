/*
** EPITECH PROJECT, 2024
** get_str
** File description:
** new func
*/

#include "base.h"

const char *get_str_in_array(char **array, char *str)
{
    for (int y = 0; array[y] != 0; y++) {
        if (my_strncmp(str, array[y], my_strlen(str)) == 0)
            return array[y];
    }
    return NULL;
}

const char *get_nstr_in_array(const char **array, const char *str)
{
    for (size_t y = 0; array[y] != 0; ++y)
        if (my_strncmp(str, array[y], my_strlen(str)) == 0)
            return array[y];
    return NULL;
}
