/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** reverse the chars in a given string
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int len = my_strlen(str);
    char c;

    while (i < len / 2) {
        c = *(str + i);
        *(str + i) = *(str + len - i -1);
        *(str + len - i - 1) = c;
        i++;
    }
    return (str);
}
