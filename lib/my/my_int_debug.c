/*
** EPITECH PROJECT, 2020
** my_int_debug
** File description:
** debug an int value
*/

#include "my.h"

void my_int_debug(char *name, int value)
{
    my_putstr("int ");
    my_putstr(name);
    my_putstr(" : ");
    my_put_nbr(value);
    my_putchar('\n');
}
