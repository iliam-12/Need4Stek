/*
** EPITECH PROJECT, 2018
** /
** File description:
** /
*/

#include "get_next_line.h"

void my_memset(char *str, int size)
{
    int i = -1;

    while (++i < size)
        str[i] = '\0';
}

char *my_realloc(char *old, int size, int k)
{
    int i = -1;
    char *new;

    if ((new = malloc(sizeof(char) * k + size)) == NULL)
        return (NULL);
    my_memset(new, k + size);
    while (i++ < k)
        new[i] = old[i];
    free(old);
    return (new);
}

int	my_read(int pos, char *buffer, int fd, char *res)
{
    if (pos == 0) {
        my_memset(buffer, READ_SIZE);
        if (read(fd, buffer, READ_SIZE) <= 0) {
            free(res);
            return (-1);
        }
    }
    return (0);
}

char *get_next_line(const int fd)
{
    static char	buffer[READ_SIZE];
    static int	pos = 0;
    char *res;
    int i = 0;
    
    if ((res = malloc(sizeof(char) * READ_SIZE + 1)) == NULL)
        return (NULL);
    while (42) {
        if (my_read(pos, buffer, fd, res) == -1)
            return (NULL);
        while (buffer[pos] && buffer[pos] != '\n')
            res[i++] = buffer[pos++];
        if (buffer[pos++] == '\n') {
            res[i] = '\0';
            return (res);
        }
        pos = 0;
        if ((res = my_realloc(res, READ_SIZE + 1, i)) == NULL)
            return (NULL);
    }
    return (NULL);
}