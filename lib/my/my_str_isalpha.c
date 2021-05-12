/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** check if a string is composed of letters from the alphabet
*/

int my_str_isalpha(char const *str)
{
    while (*str) {
        if (!((*str > 64 && *str < 91) || (*str > 96 && *str < 123)))
            return (0);
        str++;
    }
    return (1);
}
