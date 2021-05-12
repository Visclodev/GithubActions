/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** find the lowest greater prime number next to a given number
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    if (nb > 2 && nb % 2 == 0)
        nb++;
    while (!my_is_prime(nb))
        nb = nb + 2;
    return (nb);
}
