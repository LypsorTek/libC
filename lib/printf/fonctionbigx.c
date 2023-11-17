/*
** EPITECH PROJECT, 2023
** fonctionX
** File description:
** fonctionX
*/

#include "../../includes/my.h"

void fonctionbigx(va_list args)
{
    int value = va_arg(args, int);
    char hexa_str_maj[] = "0123456789ABCDEF";
    char hexa_maj[36];

    for (int i = 0; value > 0;  i++) {
        hexa_maj[i] = hexa_str_maj[value % 16];
        value = value / 16;
    }
    for (int i = 0; i >= 0; i--) {
        my_putchar(hexa_maj[i]);
    }
}
