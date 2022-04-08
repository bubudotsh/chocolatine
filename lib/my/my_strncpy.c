/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** my_strncpy
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int l_chaine = 0;

    while (src[l_chaine] != '\0' && l_chaine < n)
    {
        dest[l_chaine] = src[l_chaine];
        l_chaine++;
    }

    if (l_chaine < n) {
        dest[l_chaine] = '\0';
    }

    return (dest);
}