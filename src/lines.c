/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** coords + algo
*/

#include "../include/my.h"

int get_cols(char *buff)
{
    int x = 0;
    if (!buff)
        return (0);
    for (int i = 0; buff[i] != '\n'; i++)
        x = (x + buff[i] - '0') * 10;
    x = x / 10;
    return (x);
}

int get_line(char *buff)
{
    int i = 0;
    int y = 0;

    if (!buff)
        return (0);
    for (; buff[i] != '\n'; i++);
    i++;
    for (; buff[i] != '\n'; i++)
        y++;
    return (++y);
}
