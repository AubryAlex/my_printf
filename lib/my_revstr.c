/*
** EPITECH PROJECT, 2021
** my revstr
** File description:
** reverses a string
*/

#include "my_printf.h"

static char *my_evil_str(char *str)
{
    int i = 0;
    int s = my_strlen(str) - 1;
    char c;

    while (i < s) {
        c = str[i];
        str[i] = str[s];
        str[s] = c;
        i = i + 1;
        s = s - 1;
    }
    return (str);
}

char *my_revstr(char *str)
{
    my_evil_str(str);
    return str;
}
