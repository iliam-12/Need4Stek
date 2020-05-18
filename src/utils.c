/*
** EPITECH PROJECT, 2020
** IA
** File description:
** utils
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putchar2(char c)
{
    write(2, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}

void my_putstr2(char *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar2(str[i]);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}