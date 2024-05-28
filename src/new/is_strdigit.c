/*
** EPITECH PROJECT, 2024
** is_str_digit
** File description:
** new funcs
*/

#include <stdbool.h>
#include <stddef.h>
#include "new.h"

bool is_strdigit(const char *str)
{
    for (size_t i = 0; str[i] != '\0'; ++i)
        if (!is_digit(str[i]))
            return false;
    return true;
}
