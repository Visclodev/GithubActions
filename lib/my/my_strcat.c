/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concatenate a string to another
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int len;
    int i;

    len = my_strlen(dest);
    i = 0;
    while (src[i]) {
        dest[len -1] = src[i++];
    }
    dest[len + i] = '\0';
    return (dest);
}