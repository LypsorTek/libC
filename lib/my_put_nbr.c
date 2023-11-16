/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../includes/my.h"

int my_put_nbr(int nb)
{
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        i = (nb % 10);
        nb = (nb - i) / 10;
        my_put_nbr(nb);
        my_putchar(i + 48);
    } else
        my_putchar(nb + 48);
    return (0);
}
