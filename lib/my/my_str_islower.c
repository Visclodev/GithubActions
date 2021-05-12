/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** check if str is lowercase
*/

int my_str_islower(char const *str)
{
    while (*str) {
        if (!((*str > 96) && (*str < 123)))
            return (0);
        str++;
    }
    return (1);
}
