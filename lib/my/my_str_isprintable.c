/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** check if a string is printable
*/

int my_str_isprintable(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >=  0 || str[i] <=  31 || str[i] == 127)
            return (0);
        i = i + 1;
    }
    return (1);
}