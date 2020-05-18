/*
** EPITECH PROJECT, 2020
** IA
** File description:
** toolbox2
*/

#include "../include/my.h"

int char_isnbr(char nb)
{
    if (nb >= '0' && nb <= '9')
        return (0);
    return (84);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (my_strlen(s1) != my_strlen(s2)) return (84);
    while (s1[i] && s2[i]) {
        if (s1[i] == s2[i])
            i++;
        else
            return (84);
    } return (0);
}

int _line(char **tab)
{
    int i = 0;

    while (tab[i])
        i++;
    return (i);
}

int _len(char **tab)
{
    int i = 0, j = 0;

    while (tab[i][j])
        j++;
    return (j);
}

char **my_malloc(char **tab)
{
    int line = _line(tab);
    int len = _len(tab);

    if ((tab = malloc(sizeof(char *) * (line + 1))) == NULL)
        return (NULL);
    for (int y = 0; y != line; y++) {
        if ((tab[y] = malloc(sizeof(char) * (len + 1))) == NULL)
            return (NULL);
    }
    return (tab);
}