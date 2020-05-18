/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** my_str_to_word_array
*/

#include "../include/my.h"

int nb_line(char const *str)
{
    int i = 0;
    int line = 0;

    while (str[i] != '\0') {
        if (str[i] == ':')
            line++;
        i++;
    }
    return (line + 1);
}

int nb_char(char const *str, int i)
{
    while (str[i] != ':' && str[i] != '\0')
        i++;
    return (i + 1);
}

char **my_str_to_word_array(char const *str)
{
    int line = nb_line(str), len = 0, i = 0, x = 0, y = 0;
    char **tab;

    if ((tab = malloc(sizeof(char *) * (line + 1))) == NULL)
        return (NULL);
    x = 0;
    y = 0;
    for (; y != line; y++) {
        len = nb_char(str, i);
        if ((tab[y] = malloc(sizeof(char) * (len + 1))) == NULL)
            return (NULL);
        while (str[i] != ':' && str[i] != '\0') {
            tab[y][x] = str[i];
            x++;
            i++;
        }
        i++;
        tab[y][x] = '\0';
        x = 0;
    }
    return (tab);
}