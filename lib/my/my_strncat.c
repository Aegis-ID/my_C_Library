/*
** EPITECH PROJECT, 2023
** my strncat
** File description:
** task03
*/

#include "include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_length = my_strlen(dest);
    int src_length = my_strlen(src);
    int str_length = dest_length + src_length + 2;
    int z = 0;

    for (int i = 0; i < str_length; i++) {
        if (i <= dest_length) {
            dest[i];
        } else {
            dest[i] = src[z];
            z++;
        }
        if (z == nb) {
            break;
        }
    }
    return dest;
}
