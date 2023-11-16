/*
** EPITECH PROJECT, 2023
** my_strncpy
** File description:
** my_strnpy
*/

int my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] && i < n) {
        dest[i] = src[i];
        i++;
    }
    return (0);
}
