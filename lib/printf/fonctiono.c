/*
** EPITECH PROJECT, 2023
** fonctiono
** File description:
** fonctiono
*/

#include "../../includes/my.h"

int my_put_nbr_eight(int n)
{
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_nbr_eight(n / 8);
        my_put_nbr_eight(n % 8);
    } else
        my_putchar(n + '0');
    return (0);
}

void convertbase8(va_list args)
{
    my_put_nbr_eight(va_arg(args, int));
}
