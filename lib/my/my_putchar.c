/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** print a single char in stdo
*/

#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}