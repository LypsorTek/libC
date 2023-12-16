/*
** EPITECH PROJECT, 2023
** libC [WSL: Ubuntu]
** File description:
** my_str_isupper
*/

char *my_str_isupper(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 'A' || str[i] > 'Z')
            return ("false");
        i++;
    }
    return ("true");
}