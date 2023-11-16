/*
** EPITECH PROJECT, 2023
** my_strchr
** File description:
** my_strchr
*/

int my_strchr(char *str, char c)
{
    int i = 0;

    while (str[i]) {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}
