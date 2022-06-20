/*
** EPITECH PROJECT, 2021
** my putchar
** File description:
** putchar
*/

#include "my_printf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
