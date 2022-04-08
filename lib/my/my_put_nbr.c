/*
** EPITECH PROJECT, 2021
** put_nbr
** File description:
** put_nbr
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        if (nb == -2147483648) {
            nb += 2000000000;
            my_putchar('2');
        }
        nb *= -1;
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + 48);
    return (0);
}