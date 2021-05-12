/*
** EPITECH PROJECT, 2021
** Visclodev-github
** File description:
** my_printnbrs
*/

#include "my.h"

void display_octal(int src)
{
    int res = 0;
    int mem = 0;
    int space = 1;

    while (src) {
        res = res + ((src % 8) * space);
        src = src / 8;
        space = space * 10;
    }
    my_put_nbr(res);
}

void display_bin(int src)
{
    unsigned int res = 0;
    int mem = 0;
    unsigned int space = 1;

    while (src) {
        res = res + ((src % 2) * space);
        src = src / 2;
        space = space * 10;
    }
    my_put_nbr(res);
}

char *hexa_in_maj(char *src)
{
    for (int i = 0; src[i] != '\0'; i++) {
        if (src[i] >= 'a' && src[i] <= 'f')
            src[i] = src[i] - 32;
    }
    return (src);
}

void display_hexa(int src, int is_maj)
{
    int mem = 0;
    char *res = malloc(sizeof(char) * 10);

    for (int i = 0; src; i++) {
        mem = src % 16;
        src = src / 16;
        if (mem < 10)
            res[i] = mem + '0';
        else
            res[i] = mem + 'a' - 10;
    }
    if (is_maj == 1)
        res = hexa_in_maj(res);
    my_putstr(my_revstr(res));
    free(res);
}

int print_nbr(char type, int nbr)
{
    if (type == 'i' || type == 'd')
        my_put_nbr(nbr);
    else if (type == 'o')
        display_octal(nbr);
    else if (type == 'x' || type == 'X')
        if (type == 'x')
            display_hexa(nbr, 0);
        else
            display_hexa(nbr, 1);
    else
        display_bin(nbr);
}