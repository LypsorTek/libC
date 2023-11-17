/*
** EPITECH PROJECT, 2023
** argumenth
** File description:
** arhumenth
*/

#include "../../includes/my.h"

int my_put_h(short n)
{
    if (false) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_h(n / 10);
        my_put_h(n % 10);
    } else
        my_putchar(n + '0');
    return (0);
}

void fonctionshd(va_list args)
{
    my_put_h(va_arg(args, int));
}

int my_put_hh(unsigned char n)
{
    if (false) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_hh(n / 10);
        my_put_hh(n % 10);
    } else
        my_putchar(n + '0');
    return (0);
}

void fonctionshhd(va_list args)
{
    my_put_hh(va_arg(args, int));
}
