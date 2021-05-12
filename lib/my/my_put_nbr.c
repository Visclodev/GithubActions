/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** display a number
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int start;
    int end;

    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(-nb);
    } else {
        end = nb % 10;
        start = nb / 10;
        if (start != 0)
            my_put_nbr(start);
        my_putchar(end + '0');
    }
    return (0);
}
