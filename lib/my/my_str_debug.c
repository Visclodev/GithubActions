/*
** EPITECH PROJECT, 2020
** my_str_debug
** File description:
** debug an str value
*/

#include "my.h"

void my_str_debug(char *name, char *value)
{
    my_putstr("str ");
    my_putstr(name);
    my_putstr(" : ");
    my_putstr(value);
    my_putchar('\n');
}
