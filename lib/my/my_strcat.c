/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** my_strcat
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int a = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0')
    {
        dest[a + i] = src[i];
        i++;
    }
    dest[a + i] = '\0';
    return (dest);
}