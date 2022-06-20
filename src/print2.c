/*
** EPITECH PROJECT, 2022
** B-PSU-210-BDX-2-1-minishell2-alex.aubry
** File description:
** print2
*/

#include "my_printf.h"

void print_str(va_list va)
{
    my_putstr(va_arg(va, char *));
    return;
}
