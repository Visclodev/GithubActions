/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** copy the number of chars asked from a string into a string
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (n > 0 && *(src + i)) {
        *(dest + i) = *(src + i);
        i++;
        n--;
    }
    if (n > 0)
        *(dest + i) = '\0';
    return (dest);
}
