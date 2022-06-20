/*
** EPITECH PROJECT, 2021
** my putstr
** File description:
** displays characters of a string one-by-one
*/
void my_putchar(char c);

int my_putstr(char const *str)
{
    int i;
    i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i = i + 1;
    }
    return 0;
}
