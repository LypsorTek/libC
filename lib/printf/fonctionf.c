/*
** EPITECH PROJECT, 2023
** fonctionf
** File description:
** fonctinf
*/

#include "../../includes/my.h"

void my_put_float(float f)
{
    int i = f;
    int decim = 0;

    my_put_nbr(i);
    my_putchar('.');
    f = f - i;
    for (int k = 0; k < 6; k++) {
        f = f * 10;
        decim = f;
        my_put_nbr(decim);
        f = f - decim;
    }
}

void fonctionf(va_list args)
{
    my_put_float(va_arg(args, double));
}
