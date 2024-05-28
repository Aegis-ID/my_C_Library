/*
** EPITECH PROJECT, 2024
** are in str
** File description:
** new
*/

#include <stddef.h>
#include <stdbool.h>
#include "new.h"

bool are_in_str(const char *c, const char *str)
{
    for (size_t i = 0; c[i] != '\0'; ++i)
        if (is_in_str(c[i], str))
            return true;
    return false;
}
