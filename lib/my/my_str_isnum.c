/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** check if a string is composed of numbers exclusively
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '0')
            i++;
        else
            return (0);
    }
    return (1);
}
