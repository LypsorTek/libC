/*
** EPITECH PROJECT, 2023
** my_put_unisgned_nbr
** File description:
** unisgend_nbr
*/

#include "../includes/my.h"

int my_put_unisgned_nbr(unsigned int n)
{
    if (false) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_nbr(n / 10);
        my_put_nbr(n % 10);
    } else
        my_putchar(n + '0');
    return (0);
}
