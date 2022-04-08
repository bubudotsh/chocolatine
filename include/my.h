/*
** EPITECH PROJECT, 2021
** bsprintf
** File description:
** bsprintf
*/

#include <stdarg.h>

#ifndef MY_H_
    #define MY_H_

int my_compute_factorial_it(int nb);
int my_compute_factorial_rec(int nb);
int my_compute_power_it(int nb, int p);
char *my_evil_str(char *str);
int my_isneg(int n);
void my_swap(int *a, int *b);
char *my_strncpy(char *dest, char const *src, int n);
int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
int my_putstr(char const *str);
void my_putchar (char c);
int my_put_nbr(int nb);
int bin (int nb);
int octo (int nb);
int positif (int nb);
int hexa (long int nb, int maj);
int other_format (int pos, char *a, va_list list);
char basic_format (int pos, char *a, va_list list);
int base_format (int pos, char *a, va_list list);
int my_printf(char *a, ...);

#endif /* MY_H_ */