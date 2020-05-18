/*
** EPITECH PROJECT, 2020
** IA
** File description:
** main
*/

#include "../include/my.h"

int main(void)
{
	my_putstr("START_SIMULATION\n");
	get_next_line(0);
	my_putstr("CAR_FORWARD:1\n");
	get_next_line(0);
	parcours();
	my_putstr("STOP_SIMULATION\n");
	get_next_line(0);
}