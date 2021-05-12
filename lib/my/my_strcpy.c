/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy a string into another one
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    while (src[i])
        dest[i] = dest[i++];
    dest[i] = '\0';
    return (dest);
}
