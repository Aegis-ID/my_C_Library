/*
** EPITECH PROJECT, 2024
** array to str
** File description:
** new func
*/

#include <stddef.h>
#include <stdlib.h>
#include "new.h"

char *array_to_str(const char **array, const char delim)
{
    size_t len = arraylen(array);
    size_t pos = 0;
    char *str = malloc(sizeof(char) * (len + 1));

    if (str == NULL)
        return NULL;
    for (size_t y = 0; array[y] != 0; ++y) {
        for (size_t x = 0; array[y][x] != '\0'; ++x) {
            str[pos] = array[y][x];
            pos += 1;
        }
        str[pos] = delim;
        pos += 1;
    }
    return str;
}
