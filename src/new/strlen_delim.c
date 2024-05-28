/*
** EPITECH PROJECT, 2024
** strlen_delim
** File description:
** new func
*/

#include <stddef.h>

size_t strlen_delim(const char *str, const char delim)
{
    size_t size = 0;

    for (size_t count = 0; str[count] != '\0'; ++count) {
        if (str[size] == delim)
            return size;
        size += 1;
    }
    return size;
}
