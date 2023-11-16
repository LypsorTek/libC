/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** my_strlen
*/

#include "../includes/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}
