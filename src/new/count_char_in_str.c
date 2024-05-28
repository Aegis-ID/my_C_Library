/*
** EPITECH PROJECT, 2024
** count char in str
** File description:
** new func
*/

#include <stddef.h>

size_t count_char_in_str(const char *str, const char c)
{
    size_t count = 0;

    for (size_t x = 0; str[x] != '\0'; ++x)
        if (str[x] == c)
            count += 1;
    return count;
}
