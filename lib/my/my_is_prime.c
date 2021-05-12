/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** return 1 if the given number is a prime number, else return 0
*/

int my_is_prime(int nb)
{
    int i;

    for (i = 2; i < nb; i++) {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}
