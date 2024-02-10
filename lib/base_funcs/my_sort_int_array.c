/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** some return0 functions
*/

#include <stdio.h>
#include "include/my.h"

struct info {
    int nb;
    int pos;
};

static void compare(struct info *min, int *array, int i)
{
    if (min->nb >= array[i]) {
        min->nb = array[i];
        min->pos = i;
    }
    return;
}

void my_sort_int_array(int *array, int size)
{
    struct info min;

    for (int sorted = 0; sorted < size; sorted++) {
        min.nb = array[sorted];
        for (int i = sorted; i < size; i++)
            compare(&min, array, i);
        my_swap(&array[sorted], &array[min.pos]);
    }
    return;
}
