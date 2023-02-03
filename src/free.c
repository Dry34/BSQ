/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** main
*/

#include "../include/my.h"

void forfree(int *map, char *buff)
{
    free(map);
    free(buff);
}
