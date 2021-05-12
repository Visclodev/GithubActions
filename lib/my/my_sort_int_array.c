/*
** EPITECH PROJECT, 2020
** my_sort_in_array
** File description:
** sort array in order
*/

void my_sort_in_array(int *tab, int size)
{
    int i = 0;
    int mem = 0;

    for (i; i != size; i++) {
        if (i > 0 && tab[i] < tab[i - 1]) {
            mem = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = mem;
            i = i - 2;
        }
    }
}
