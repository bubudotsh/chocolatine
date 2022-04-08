/*
** EPITECH PROJECT, 2021
** base.c
** File description:
** base
*/

#include <stdarg.h>
#include "../../include/my.h"

int bin (int nb)
{
    if (nb >= 2) {
        bin(nb / 2);
    }
    my_putchar((nb % 2) + 48);
}

int octo (int nb)
{
    if (nb >= 8) {
        octo(nb / 8);
    }
    my_putchar((nb % 8) + 48);
}

int positif (int nb)
{
    my_putchar('+');
    my_put_nbr(nb);
}

int hexa (long int nb, int maj)
{
    char letter[100];
    long long quotient;
    int i;
    int j = 0;
    int temp = 0;

    quotient = nb;

    for (i = 1; quotient != 0; i++) {
        temp = quotient % 16;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        letter[i] = temp;
        quotient /= 16;
    }

    for (j = i - 1; j > 0; j--) {
        if (letter[j] <= 'Z' && letter[j] >= 'A') {
            my_putchar(letter[j] + maj);
        } else
            my_putchar(letter[j]);
    }
}