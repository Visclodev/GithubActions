/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** return a number given in a string
*/

#include <unistd.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int nbr = 0;

    if (str[0] == '-' && str[1] != '\0')
        i++;
    for (i; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            write(2, "there must be only numbers in the string", 40);
        nbr = nbr + str[i] - 48;
        nbr = nbr * 10;
    }
    nbr = nbr / 10;
    if (str[0] == '-')
        return (-1 * nbr);
    else
        return (nbr);
}
