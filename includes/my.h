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
    #include <stdarg.h>
    #include <stddef.h>
    #include <string.h>
    #include <limits.h>
    #include <stdbool.h>


typedef struct check_flag_s {
    const char *flag;
    void (*ptr)(va_list);
} check_flag_t;

typedef struct check_second_flag_s {
    const char *flag2;
    void(*ptr2)(va_list);
} check_second_flag_t;

typedef struct check_third_flag_s {
    const char *flag3;
    void(*ptr3)(va_list);
} check_third_flag_t;


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
int my_put_unisgned_nbr(unsigned int n);

void fonctionc(va_list args);
void fonctiond(va_list args);
void fonctions(va_list args);
void printpourcent(va_list args);
void fonctionsld(va_list args);
void fonctionu(va_list args);
void fonctionf(va_list args);
void fonctionslld(va_list args);
void fonctionshhd(va_list args);
void fonctionshd(va_list args);
void fonctionp(va_list args);
void fonctionslu(va_list args);
void fonctionn(va_list args );
void convertbase8(va_list args);
int convertbase16(va_list args);
int convertbase2(va_list args);
void fonctionx(va_list args);
void fonctionbigx(va_list args);
void my_printf(const char *format, ...);
void fonctionsld(va_list args);
void checkllflag(void);



#endif /* !MYH */
