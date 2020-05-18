/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** toolbox
*/

#include "../include/my.h"

int	my_getnbr(char *str)
{
    int	i;
    int nbr;

    i = 0;
    nbr = 0;
    if (str[i] < '0' && str[i] > '9')
        i = i + 1;
    else {
        while (str[i] >= '0' && str[i] <= '9') {
            nbr = ((nbr * 10) + (str[i] - 48));
            i = i + 1;
        }
    }
    return (nbr);
}

void my_put_nbr(int n)
{
    int c;

    c = 0;
    if (n < 0) {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        my_put_nbr(n / 10);
    c = ((n % 10) + '0');
    write(2, &c, 1);
}