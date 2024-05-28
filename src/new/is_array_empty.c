/*
** EPITECH PROJECT, 2024
** is array empty
** File description:
** new_funcs
*/

#include <stddef.h>
#include <stdbool.h>

#include "new.h"

bool is_array_empty(const char **array)
{
    size_t size = 0;

    if (array == NULL)
        return true;
    size = arraylen(array) + array_strlen(array);
    if (size == 0)
        return true;
    return false;
}
