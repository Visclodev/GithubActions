/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** check if str is upper case
*/

int my_str_isupper(char const *str)
{
    while (*str) {
        if (!((*str > 64) && (*str < 91)))
            return (0);
        str++;
    }
    return (1);
}
