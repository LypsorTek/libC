/*
** EPITECH PROJECT, 2023
** myh
** File description:
** myh
*/

#ifndef MYH

    #define MYH

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/types.h>

int my_strcat(char *dest, char const *src);
int my_strlen(char const *str);
int my_putstr(char const *str);
int my_putchar(char c);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int nb);
char *my_strdup(char const *src);
char *my_revstr(char *str);
char **my_str_to_word_array(char const *str);
int my_isdigit(char c);
int my_isneg(int n);




#endif /* !MYH */
