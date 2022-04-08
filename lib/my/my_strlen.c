/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** my_strlen
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int l_chaine = 0;

    while (str[l_chaine] != '\0')
    {
        l_chaine++;
    }
    return (l_chaine);
}
