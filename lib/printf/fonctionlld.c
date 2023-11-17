/*
** EPITECH PROJECT, 2023
** long long
** File description:
** long long
*/

#include "../../includes/my.h"

int my_put_long_long(long long n)
{
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_long_long(n / 10);
        my_put_long_long(n % 10);
    } else
        my_putchar(n + '0');
    return (0);
}

void fonctionslld(va_list args)
{
    my_put_long_long(va_arg(args, long long));
}
