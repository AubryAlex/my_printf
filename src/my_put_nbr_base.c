/*
** EPITECH PROJECT, 2021
** my put base
** File description:
** my_put_base
*/

#include "my_printf.h"

static void formatter(char *str)
{
    my_revstr(str);
    my_putstr(str);
}

char *my_put_nbr_base(int nb, int base)
{
    int i = 0;
    int c = 0;
    int n = nb;
    char *str;

    if (nb < 0)
        nb *= -1;
    while (n != 0) {
        n = n / base;
        c += 1;
    }
    str = malloc(sizeof(char) * (c + 1));
    while (nb != 0) {
        str[i] = ((nb % base) + '0');
        nb = nb / base;
        i = i + 1;
    }
    str[i] = '\0';
    formatter(str);
    return 0;
}
