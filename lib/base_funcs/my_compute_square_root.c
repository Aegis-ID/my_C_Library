/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** some return0 functions
*/

static double my_fabs(double nb)
{
    if (nb >= 0)
        return nb;
    return -nb;
}

double my_compute_square_root(double nb)
{
    double save = nb;
    double result;

    if (nb < 2)
        return nb;
    result = (save + (nb / save)) / 2;
    while (my_fabs(nb - result) >= 0.00001) {
        save = result;
        result = (save + (nb / save)) / 2;
    }
    return result;
}
