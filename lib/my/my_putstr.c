/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** some return0 functions
*/

int my_putstr(char const *str)
{
    int	i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i +	1;
    }
}
