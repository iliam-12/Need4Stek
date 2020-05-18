/*
** EPITECH PROJECT, 2020
** IA
** File description:
** parcours
*/

#include "../include/my.h"

char *delete_point(char *str)
{
    int i = 0, k = 0, p = 0;
    char *new_str = malloc(sizeof(char) * (my_strlen(str)));

    for (int u = 0; str[u]; u++) {
        if (str[u] == '.')
            p++;
    }
    while (str[i]) {
        if (str[i] == '.')
            i++;
        new_str[k] = str[i];
        i++;
        k++;
    }
    return (new_str);
}

char **delete_useless_line(char **tab)
{
    char **new_tab = my_malloc(tab);
    int i = 0, jul = 0;

    while (tab[i]) {
        if (char_isnbr(tab[i][0]) == 0 && my_strlen(tab[i]) > 1) {
            new_tab[jul] = tab[i];
            jul++;
        }
        if (my_strcmp("Track Cleared", tab[i]) == 0)
            return (NULL);
        i++;
    }
    return (new_tab);
}

void parcours(void)
{
    char *info = NULL, **tab = NULL;
    int jobi = 0;

    while (1) {
        jobi = 0;
        my_putstr("GET_INFO_LIDAR\n");
        info = get_next_line(0);
        info = delete_point(info);
        tab = my_str_to_word_array(info);
        tab = delete_useless_line(tab);
        if (tab == NULL)
            return;
        if (jobi == 0 && toward(my_getnbr(tab[15]), my_getnbr(tab[9]), my_getnbr(tab[22])) == 0)
            lateral(my_getnbr(tab[0]), my_getnbr(tab[31]));
    }
}