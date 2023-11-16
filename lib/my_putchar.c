/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** my_putchar
*/

#include "../includes/my.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
