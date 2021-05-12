/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** return a number raised by the power of another
*/

int my_compute_power_rec(int nb, int power)
{
    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    return (nb * (my_compute_power_rec(nb, power - 1)));
}
