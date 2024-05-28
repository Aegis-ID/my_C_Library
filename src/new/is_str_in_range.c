/*
** EPITECH PROJECT, 2024
** is str in range
** File description:
** new func
*/

#include <stdbool.h>
#include <stdint.h>

bool is_str_in_range(const char *str,
    const uint8_t ascii_start, const uint8_t ascii_end)
{
    for (uint8_t i = 0; str[i] != '\0'; ++i)
        if ((str[i] > ascii_start)
            && (str[i] < ascii_end))
            return false;
    return true;
}
