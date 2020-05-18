/*
** EPITECH PROJECT, 2020
** IA
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

/*___ INCLUDES ___ */

#include <stdio.h>
#include <unistd.h>
#include "../toolbox/get_next_line.h"

/* ___ FUNCTIONS ___ */
    /*___ PARCOURS ___*/
int lateral(int left, int right);
int toward(int middle, int left, int right);
void parcours(void);
    /*___ GNT ___ */
void my_memset(char *str, int size);
char *my_realloc(char *old, int size, int k);
int	my_read(int pos, char *buffer, int fd, char *res);
char *get_next_line(const int fd);
    /*___ UTILS ___*/
void my_putchar(char c);
void my_putchar2(char c);
void my_putstr(char *str);
void my_putstr2(char *str);
int my_strlen(char const *str);
    /*___ TOOLBOX ___*/
int char_isnbr(char nb);
char **my_str_to_word_array(char const *str);
int my_strcmp(char const *s1, char const *s2);
int nb_char(char const *str, int i);
char **my_malloc(char **tab);
int nb_line(char const *str);
int	my_getnbr(char *str);
void my_put_nbr(int n);

#endif /* !MY_H_ */
