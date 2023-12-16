/*
** EPITECH PROJECT, 2023
** libC [WSL: Ubuntu]
** File description:
** my_str_islower
*/

char *my_str_islower(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 'a' || str[i] > 'z')
            return ("false");
        i++;
    }
    return ("true");
}