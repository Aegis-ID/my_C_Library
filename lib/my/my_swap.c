/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** swap a & b
*/

void my_swap(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}
