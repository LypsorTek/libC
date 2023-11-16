/*
** EPITECH PROJECT, 2023
** my_strncat
** File description:
** my_strncat
*/

int my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i])
        i++;
    while (src[j] && j < nb) {
        dest[i] = src[j];
        i++;
        j++;
    }
    return (0);
}
