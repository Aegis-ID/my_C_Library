/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** some return0 functions
*/

#include <stddef.h>

size_t my_strlen(char const *str)
{
    size_t i = 0;

    while (str[i] != '\0')
        i += 1;
    return i;
}
