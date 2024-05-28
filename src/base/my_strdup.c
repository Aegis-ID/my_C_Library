/*
** EPITECH PROJECT, 2024
** my_strndup.c
** File description:
** base_func
*/

#include "base.h"
#include <stdlib.h>

char *my_strdup(const char *str)
{
    int size = my_strlen(str);
    char *nstr = malloc(sizeof(char) * (size + 1));

    for (int i = 0; i < size; i++)
        nstr[i] = str[i];
    nstr[size] = '\0';
    return nstr;
}
