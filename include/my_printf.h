/*
** EPITECH PROJECT, 2021
** B-PSU-100-BDX-1-1-myprintf-alex.aubry
** File description:
** m
*/

#ifndef M_H_
    #define M_H_

    #include <stdarg.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <aio.h>

char *my_revstr(char *str);
char *my_put_nbr_base(int nb, int base);
int my_isneg(int n);
int my_printf(const char *format, ...);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_strlen(char const *str);
int handle_flag_s(char *S);
void print_nbr(va_list va);
void print_binary(va_list va);
void print_oct(va_list va);
void print_char(va_list va);
void print_percent(va_list va);
void print_str(va_list va);

#endif /* !M_H_ */
