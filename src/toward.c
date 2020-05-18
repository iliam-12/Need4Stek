/*
** EPITECH PROJECT, 2020
** IA
** File description:
** toward
*/

#include "../include/my.h"

int toward(int mid, int left, int right)
{
    if (mid > 7000 && left > 6000 && right > 6000) {
        my_putstr("WHEELS_DIR:0\n");
        get_next_line(0);
        if (mid < 20000 && mid > 15000) {
            my_putstr("CAR_FORWARD:0.6\n");
	        get_next_line(0);
            return (1);
        }
        if (mid <= 15000) {
            my_putstr("CAR_FORWARD:0.4\n");
            get_next_line(0);
            return (1);
        }
        my_putstr("CAR_FORWARD:1\n");
	    get_next_line(0);
        return (1);
    }
    return (0);
}