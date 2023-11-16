/*
** EPITECH PROJECT, 2023
** my_strcpy
** File description:
** my_strcpy
*/

int my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    return (0);
}
