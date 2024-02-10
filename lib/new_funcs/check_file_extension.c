/*
** EPITECH PROJECT, 2024
** check file extension
** File description:
** in case...
*/

#include "include/my.h"

int check_file_extension(const char *str, const char *ext)
{
    int strlen = my_strlen(str);
    int ext_len = my_strlen(ext);
    char *check = malloc(sizeof(char) * ext_len + 1);
    int k = 0;

    if (strlen < ext_len)
        return 0;
    for (int i = strlen - ext_len; i < strlen; i++) {
        check[k] = str[i];
        k++;
    }
    if (my_strcmp(check, ".rdr") == 0) {
        free(check);
        return 1;
    }
    free(check);
    return 0;
}
