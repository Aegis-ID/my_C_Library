/*
** EPITECH PROJECT, 2023
** my strcat
** File description:
** task02
*/

char *my_strcat(char *dest, char const *src)
{
    int x;
    int y;
    int z = 0;

    for (x = 0; src[x] != '\0'; x++) {
    }
    x = x - 1;
    for (y = 0; dest[y] != '\0'; y++) {
    }
    y = y - 1;
    for (int i = 0; i < (x + y + 2); i++) {
        if (i > y) {
            dest[i] = src[z];
            z++;
        }
    }
    return dest;
}
