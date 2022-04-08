/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../../include/my.h"

int other_format (int pos, char *a, va_list list)
{
    if (a[pos] == '+') 
        if (a[pos + 1] == 'd')
            if (a[pos + 2] >= 0)
                positif(va_arg(list, int));
            else 
                my_put_nbr(va_arg(list, int));

    if (a[pos] == '-')
        my_put_nbr(va_arg(list, int));
}

char basic_format (int pos, char *a, va_list list)
{
    if (a[pos] == 's')
        my_putstr(va_arg(list, char *));
    if (a[pos] == 'd')
        my_put_nbr(va_arg(list, int));
    if (a[pos] == '%')
        my_putchar('%');
    if (a[pos] == 'c')
        my_putchar(va_arg(list, int));
}

int base_format (int pos, char *a, va_list list)
{
    if (a[pos] == 'b') 
        bin(va_arg(list, int));
    if (a[pos] == 'o') 
        octo(va_arg(list, int));
    if (a[pos] == 'x') {
        int maj = 32;
        hexa(va_arg(list, int), maj);
    }
    if (a[pos] == 'X') {
        int maj = 0;
        hexa(va_arg(list, int), maj);
    }
}

int my_printf(char *a, ...)
{
    va_list list;
    va_start(list, a);

    for (int i = 0; a[i] != '\0'; i++) {

        if (a[i - 1] == '%') {
            basic_format(i, a, list);
            base_format(i, a, list);
            other_format(i, a, list);
        } else if (a[i] != '%') 
            my_putchar(a[i]);
    }
    my_putchar('\n');

    va_end(list);
    return (0);
}




