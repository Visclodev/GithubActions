/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** take each word of a string and put them in an array of strings
*/

#include <unistd.h>
#include "my.h"

char **my_str_to_word_array(char const *src)
{
    char **res;
    int i = 0;
    int j = 0;
    int word = 0;

    while (src[i] != '\0') {
        j = 0;
        while (src[i] == ' ') {
            res[word][j] = src[i];
            i++;
            j++;
        }
        word++;
    }
    return (res);
}
