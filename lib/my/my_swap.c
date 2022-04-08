/*
** EPITECH PROJECT, 2021
** my_swap(
** File description:
** my_swap
*/

#include "../../include/my.h"

void my_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
