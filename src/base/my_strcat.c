/*
** EPITECH PROJECT, 2023
** my strcat
** File description:
** task02
*/

#include "base.h"

char *my_strcat(char *dest, char const *src)
{
    int src_len = my_strlen(src);
    int dest_len = my_strlen(dest);
    int z = 0;

    for (int i = 0; i < (src_len + dest_len); i++) {
        if (i > dest_len) {
            dest[i] = src[z];
            z++;
        }
    }
    return dest;
}
