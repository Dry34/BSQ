/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** main
*/

#include "../include/my.h"

char *file(char *filepath, int size)
{
    char *buff = malloc(sizeof(char) * size + 1);
    int fd = open(filepath, O_RDONLY);

    if (fd < 0) {
        free(buff);
        exit (84);
    }
    read(fd, buff, size);
    buff[size] = '\0';
    return (buff);
}
