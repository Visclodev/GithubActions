/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** swap two pointers
*/

void my_swap(int *a, int *b)
{
    int mem = *a;

    mem = *b;
    *b = *a;
    *a = mem;
}
