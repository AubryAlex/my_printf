/*
** EPITECH PROJECT, 2021
** B-PSU-100-BDX-1-1-myprintf-alex.aubry
** File description:
** handle_S
*/

#include "my_printf.h"

static void print_s_oct(char c)
{
    int chr;

    if (c < 0)
        chr = c + 256;
    else
        chr = c;
    if (chr < 100)
        my_putchar('0');
    if (chr < 10)
        my_putchar('0');
    my_put_nbr_base(chr, 8);
}

int handle_flag_s(char *S)
{
    int i = 0;

    while(S[i] != '\0') {
        if (S[i] >= 32 && S[i] <= 127)
            my_putchar(S[i]);
        else {
            my_putstr("\\");
            print_s_oct(S[i]);
        }
        i += 1;
    }
    return 0;
}
