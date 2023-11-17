/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "../../includes/my.h"


static check_flag_t tab[] = {
    {"d", fonctiond},
    {"i", fonctiond},
    {"s", fonctions},
    {"c", fonctionc},
    {"u", fonctionu},
    {"f", fonctionf},
    {"p", fonctionp},
    {"n", fonctionn},
    {"%", printpourcent},
    {"o", convertbase8},
    {"x", fonctionx},
    {"X", fonctionbigx},
    {NULL, NULL}
};

static check_second_flag_t tab2[] = {
    {NULL, NULL}

};

static check_third_flag_t tab3[] = {
    {NULL, NULL}
};


void detectthirdflag(const char *i , va_list args)
{
    for (int j = 0; tab3[j].flag3 != NULL; j++) {
        if (*i == *tab3[j].flag3) {
            tab3[j].ptr3(args);
            break;
        }
    }
}

void detectsecondlfag(const char *i , va_list args)
{
    for (int j = 0; tab2[j].flag2 != NULL; j++) {
        if (*i == *tab2[j].flag2) {
            tab2[j].ptr2(args);
            break;
        }
    }
}

void detecteflag( const char *i, va_list args)
{
    for (int j = 0; tab[j].flag != NULL; j++) {
        if (*i == *tab[j].flag) {
            tab[j].ptr(args);
                break;
        }
    }
}

void checkllflag(void)
{
   return;
}

void my_printf(const char *format, ...)
{
    int countn = 0;
    va_list args;

    va_start(args, format);
    for (const char *i = format; *i != '\0'; i++) {
        if (*i == '%') {
            i++;
            detecteflag(i, args);
        } else {
            my_putchar(*i);
            countn++;
        }
    }
    va_end(args);
}
