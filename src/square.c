/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** write
*/

#include "../include/my.h"

void square(int *map, char *buff)
{
    bsq_t *bsq = malloc(sizeof(bsq_t));

    init_struct(bsq, buff, map);
    bsq = digits(bsq);
    if ((bsq->line - 1) != 1 && bsq->cols != 1)
        bsq = find_square(bsq);
    bsq = convert_to_char(bsq);
    map_finish(bsq);
    write(1, bsq->buff, strmap(bsq->map));
    free(bsq);
}

bsq_t *find_square(bsq_t *bsq)
{
    int i = 0;
    for (; bsq->map[i] != -2; i++);
    i += 2;
    for (; bsq->map[i] != -1; i++) {
        if (bsq->map[i] == -2 && bsq->map[i + 1] != -1) {
            i++;
            continue;
        }
        if (bsq->map[i + 1] != -1)
            bsq->map[i] = def_square(bsq, i);
        else
            return (bsq);
    }
    return (bsq);
}

int def_square(bsq_t *bsq, int i)
{
    int tab[3];
    int lower_val;

    if (bsq->map == NULL)
        return (0);
    if (bsq->map[i] == 0)
        return (0);
    tab[0] = bsq->map[i - 1];
    tab[1] = bsq->map[i - bsq->line];
    tab[2] = bsq->map[i - bsq->line - 1];
    lower_val = tab[0];
    for (int j = 0; j != 3; j++)
        if (lower_val > tab[j])
            lower_val = tab[j];
    return (lower_val + 1);
}

void values(bsq_t *bsq, int *bsqa, int *la)
{
    for (int i = 0; bsq->map[i] != -1; i++) {
        if (bsq->map[i] > *bsqa && bsq->map[i] != -2) {
            *bsqa = bsq->map[i];
            *la = i;
        }
    }
}

bsq_t *digits(bsq_t *bsq)
{
    for (int i = 0; bsq->map[i] != -1; i++) {
        if (bsq->map[i] == '.') {
            bsq->map[i] = 1;
            continue;
        }
        if (bsq->map[i] == 'o')
            bsq->map[i] = 0;
    }
    return (bsq);
}
