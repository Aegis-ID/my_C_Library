/*
** EPITECH PROJECT, 2024
** is in str
** File description:
** new funcs
*/

#include <stddef.h>
#include <stdbool.h>

bool is_in_str(const char c, const char *str)
{
    for (size_t i = 0; str[i] != '\0'; ++i)
        if (str[i] == c)
            return true;
    return false;
}
