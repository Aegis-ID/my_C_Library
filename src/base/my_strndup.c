/*
** EPITECH PROJECT, 2024
** my_strndup.c
** File description:
** base_func
*/

#include "base.h"
#include <stdlib.h>

char *my_strndup(const char *str, const size_t n)
{
    char *nstr = malloc(sizeof(char) * (n + 1));

    if (nstr == NULL)
        return NULL;
    for (size_t i = 0; i < n; ++i)
        nstr[i] = str[i];
    nstr[n] = '\0';
    return nstr;
}
