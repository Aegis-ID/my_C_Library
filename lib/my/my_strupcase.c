/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** some return0 functions
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return str;
}
