/*
** EPITECH PROJECT, 2024
** my_aclen
** File description:
** new func
*/

#include <stddef.h>

size_t arraylen(const char **array)
{
    size_t size = 0;

    for (size_t len = 0; array[len] != 0; ++len)
        size += 1;
    return size;
}
