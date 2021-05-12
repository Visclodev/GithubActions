/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** take args and print them
*/

#include "my.h"

int is_numflag(char c)
{
    if (c == 'i' || c == 'd' || c == 'o' || c == 'X' || c == 'x')
        return (1);
    return (0);
}

void my_printf(char *args, ...)
{
    va_list ap;
    unsigned int i;
    char *s;

    va_start(ap, args);
    for (char *format = args; *format != '\0'; format++) {
        if (*format == '%') {
            format++;
            if (is_numflag(*format))
                print_nbr(*format, va_arg(ap, int));
            else if (*format == 's')
                my_putstr(va_arg(ap, char *));
            else
                my_putchar(va_arg(ap, int));
        } else
            my_putchar(*format);
    }
    va_end(ap);
}