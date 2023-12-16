/*
** EPITECH PROJECT, 2023
** libC [WSL: Ubuntu]
** File description:
** my_str_isalpha
*/

char *my_str_isalpha(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < 'a' || str[i] > 'z') &&
            (str[i] < 'A' || str[i] > 'Z'))
            return ("false");
        i++;
    }
    return ("true");
}