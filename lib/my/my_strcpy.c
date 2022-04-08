/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** copy str
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int l_chaine = 0;

    while (src[l_chaine] != '\0')
    {
        dest[l_chaine] = src[l_chaine];
        l_chaine++;
    }
    dest[l_chaine] = '\0';
    return (dest);
}