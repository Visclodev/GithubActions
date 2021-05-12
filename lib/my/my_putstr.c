/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** print a string
*/

#include "my.h"

int my_putstr(char const *str)
{
    while (*str) {
        my_putchar(*str);
        str++;
    }
}
