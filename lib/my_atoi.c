/*
** EPITECH PROJECT, 2023
** atoi
** File description:
** atoi
*/

int my_atoi(char *str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }
    while (str[i] != '\0') {
        nb = nb * 10 + str[i] - '0';
        i++;
    }
    return (nb * sign);
}