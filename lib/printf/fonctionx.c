/*
** EPITECH PROJECT, 2023
** fonctionx
** File description:
** fonctionx
*/

#include "../../includes/my.h"

void fonctionx(va_list args)
{
    int value = va_arg(args, int);
    char hexa_str[] = "0123456789abcdef";
    char hexa[36];

    for (int i = 0; value > 0;  i++) {
        hexa[i] = hexa_str[value % 16];
        value = value / 16;
    }
    for (int i = 0; i >= 0; i--) {
        my_putchar(hexa[i]);
    }
}
