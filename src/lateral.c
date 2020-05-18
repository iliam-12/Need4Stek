/*
** EPITECH PROJECT, 2020
** IA
** File description:
** lateral
*/

#include "../include/my.h"

int lateral(int left, int right)
{
    if (left < right) {
        my_putstr("CAR_FORWARD:0.2\n");
	    get_next_line(0);
        my_putstr("WHEELS_DIR:-0.3\n");
        get_next_line(0);
        return (1);
    }
    if (right < left) {
        my_putstr("CAR_FORWARD:0.2\n");
	    get_next_line(0);
        my_putstr("WHEELS_DIR:0.3\n");
        get_next_line(0);
        return (1);
    }
    return (0);
}