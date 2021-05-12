/*
** EPITECH PROJECT, 2020
** my_char_debug.c
** File description:
** debug an str
*/

#include "my.h"

void my_str_debug(char *name, char *value)
{
    my_putstr("str ");
    my_putstr(name);
    my_putstr(" : ");
    my_putstr(value);
}