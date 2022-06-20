/*
** EPITECH PROJECT, 2021
** my isneg
** File description:
** displays N if int neg, P is int pos or null
*/
void my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    my_putchar('\n');
}
