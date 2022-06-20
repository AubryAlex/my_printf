/*
** EPITECH PROJECT, 2022
** B-PSU-210-BDX-2-1-minishell2-alex.aubry
** File description:
** my_printf
*/

#include "my_printf.h"

static const void (*func[])(va_list va) = {
    &print_percent,
    &print_char,
    &print_str,
    &print_nbr,
    &print_oct
};

static const char *flags = "%csdiSxX";
static const int nb_flags = 8;

void which_formatter(char *format, va_list va)
{
    if (!format)
        return;
    for (int i = 0; i < nb_flags; i++) {
        if (format[1] == flags[i]) {
            func[i](va);
            return;
        }
    }
    my_putchar(format[0]);
    return;
}

int my_printf(const char *format, ...)
{
    va_list va;
    va_start(va, format);

    if (!format)
        return 84;
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            which_formatter((char *)&format[i], va);
            i++;
        } else
            my_putchar(format[i]);
    }
    return 0;
}