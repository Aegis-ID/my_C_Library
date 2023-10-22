/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** some return0 functions
*/

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    my_putchar('\n');
    return 0;
}
