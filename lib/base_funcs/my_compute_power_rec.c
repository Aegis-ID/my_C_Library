/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** some return0 functions
*/

int my_compute_power_rec(int nb, int power)
{
    int result = 1;
    int max = 2147483647;

    if (nb == 0) {
        return 0;
    }
    for (int i = 0; i < power && result <= max && result >= (max*(-1)); i++) {
        result = result * nb;
    }
    return result;
}
