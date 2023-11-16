/*
** EPITECH PROJECT, 2023
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include "../includes/my.h"

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **tab = malloc(sizeof(char *) * (my_strlen(str) + 1));

    tab[0] = malloc(sizeof(char) * (my_strlen(str) + 1));
    while (str[i]) {
        if (str[i] == '\n') {
            tab[j][k] = '\0';
            j++;
            k = 0;
            tab[j] = malloc(sizeof(char) * (my_strlen(str) + 1));
        } else {
            tab[j][k] = str[i];
            k++;
        }
        i++;
    }
    tab[j][k] = '\0' && tab[j + 1 ] == NULL;
    return (tab);
}
