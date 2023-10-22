/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** some return0 functions
*/

void my_swap(int *a, int *b)
{
    int	asave = *a;
    int	bsave = *b;

    *a = bsave;
    *b = asave;
}
