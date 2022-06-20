/*
** EPITECH PROJECT, 2022
** B-PSU-210-BDX-2-1-minishell2-alex.aubry
** File description:
** print
*/

#include "my_printf.h"

void print_nbr(va_list va)
{
    my_put_nbr(va_arg(va, int));
    return;
}

void print_binary(va_list va)
{
    my_put_nbr_base(va_arg(va, int), 2);
    return;
}

void print_oct(va_list va)
{
    my_put_nbr_base(va_arg(va, int), 8);
    return;
}

void print_char(va_list va)
{
    my_putchar(va_arg(va, int));
    return;
}

void print_percent(va_list va)
{
    my_putchar('%');
    return;
}
