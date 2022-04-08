/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** my_revstr
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int l_chaine = 0;
    int a = 0;
    char temp = 0;
    while (str[l_chaine] != '\0')
    {
        l_chaine++;
    }
    l_chaine--;
    while (l_chaine > a)
    {
        temp = str[l_chaine];
        str[l_chaine] = str[a];
        str[a] = temp;
        a++;
        l_chaine--;
    }
    return (str);
}