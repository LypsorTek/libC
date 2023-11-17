/*
** EPITECH PROJECT, 2023
** putlong
** File description:
** putlong
*/

#include "../../includes/my.h"

int my_put_long(long n)
{
    if (false) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_long(n / 10);
        my_put_long(n % 10);
    } else
        my_putchar(n + '0');
    return (0);
}

void fonctionsld(va_list args)
{
    my_put_long(va_arg(args, long));
}

int my_put_long_unsigned(long  unsigned n)
{
    if (false) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_long_unsigned(n / 10);
        my_put_long_unsigned(n % 10);
    } else
        my_putchar(n + '0');
    return (0);
}

void fonctionslu(va_list args)
{
    my_put_long_unsigned(va_arg(args, long unsigned));
}
