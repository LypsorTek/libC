/*
** EPITECH PROJECT, 2023
** libC [WSL: Ubuntu]
** File description:
** my_str_is_printable
*/

char *my_str_is_printable(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] > 126)
            return ("false");
        i++;
    }
    return ("true");
}