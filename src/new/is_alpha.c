/*
** EPITECH PROJECT, 2024
** is letter
** File description:
** new func
*/

#include <stdbool.h>

bool is_alpha(const char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    return false;
}
