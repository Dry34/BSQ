/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** write
*/

#include "../include/my.h"

int *map_to_int(int *map, char *buff)
{
    int i = 0;
    int j = 0;

    while (buff[i] != '\n') {
        i++;
    }
    i++;
    while (buff[i] != '\0') {
        map[j] = buff[i];
        j++;
        i++;
    }
    map[j] = -1;
    map = map_to_int_2(map);
    return (map);
}

int *map_to_int_2(int *map)
{
    int i = 0;
    while (map[i] != -1) {
        if (map[i] == '\n')
            map[i] = -2;
        i++;
    }
    return (map);
}

bsq_t *convert_to_char(bsq_t *bsq)
{
    int bsqa = 0;
    int la = 0;
    int j = 0;

    values(bsq, &bsqa, &la);
    for (int i = 0; bsq->map[i] != -1; i++)
        if (bsq->map[i] > bsqa && bsq->map[i] != -2) {
            bsqa = bsq-> map[i];
            la = i;
    }
    for (int i = la; j != bsqa; j++, i--) {
        for (int k = 0; k != bsqa; k++) {
            bsq->map[i - bsq->line *k] = 'x';
        }
    }
    bsq = map_to_char_2(bsq);
    return (bsq);
}

bsq_t *map_to_char_2(bsq_t *bsq)
{
    for (int i = 0; bsq->map[i] != -1; i++) {
        if (bsq->map[i] != 0 && bsq->map[i] != 'x' && bsq->map[i] != -2)
            bsq->map[i] = '.';
        if (bsq->map[i] == 0)
            bsq->map[i] = 'o';
    }
    return (bsq);
}

void map_finish(bsq_t *bsq)
{
    int i = 0;
    for (; bsq->map[i] != -1; i++)
        bsq->buff[i] = bsq->map[i];
    bsq->buff[i] = '\0';
    for (int i = 0; bsq->buff[i] != '\0'; i++)
        if (bsq->buff[i] == -2)
            bsq->buff[i] = '\n';
}
