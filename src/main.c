/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** main
*/

#include "../include/my.h"

int getnumber(char *str) {
    int i = 0;
    int n = 0;
    while (str[i] != '\0') {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    return n;
}

int generator_map(int n, char *str) {
    int i, j;
    printf("test1");
    for (; i < n * n; i++) {
        printf("test4");
        for (int f = 0; f < n; f++, i++) {
            printf("test2");
            printf("%c", str[j]);
            j++;
            if (str[j] == '\0')
                j = 0;
        }
        printf("\n");
        printf("test3");        
    }
    return 0;
}

int main(int ac, char **av)
{
    int size;
    char *buff = NULL;
    int *map;
    struct stat st;
    //int i = 0;

    //i = char_to_int(av[2]);

    if (ac > 4)
        return (84);
    if (ac == 3) {
        // if (getnumber(av[2]) == 0)
        //     return (84);
        generator_map(getnumber(av[2]), av[3]);
        printf("test");
        return (0);
    }
    if (stat(av[1], &st) == -1)
        return (84);
    size = st.st_size;
    if ((map = malloc(sizeof(int) *size)) == NULL)
        return (84);
    buff = file(av[1], size);
    if (!buff) {
        free(buff);
        return (84);
    }
    square(map, buff);
    forfree(map, buff);
    return (0);
}

void init_struct(bsq_t *bsq, char *buffer, int *map)
{
    bsq->buff = buffer;
    bsq->map = map_to_int(map, buffer);
    bsq->line = get_line(buffer);
    bsq->cols = get_cols(buffer);
}
