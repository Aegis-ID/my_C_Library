/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** some return0 functions
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    char *save = dest;

    for (int count = 0; count < n; count++) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return save;
}
