/*
** EPITECH PROJECT, 2024
** is str empty
** File description:
** new func
*/

#include <stdbool.h>
#include <stddef.h>

bool is_str_in_ascii(const char *str)
{
    for (size_t i = 0; str[i] != '\0'; ++i)
        if (str[i] > 32 && str[i] < 127)
            return false;
    return true;
}
