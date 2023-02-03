/*
** EPITECH PROJECT, 2023
** BSQ
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>

    typedef struct bsq_s {
        char *buff;
        int *map;
        int line;
        int cols;
    } bsq_t;

    int main(int ac, char **av);
    void map_finish(bsq_t *bsq);
    void init_struct(bsq_t *bsq, char *buffer, int *map);
    void forfree(int *map, char *buff);
    char *file(char *filepath, int size);
    int main(int ac, char **av);
    bsq_t *find_square(bsq_t *bsq);
    void square(int *map, char *buff);
    int def_square(bsq_t *bsq, int i);
    int get_line(char *buff);
    int get_cols(char *buff);
    int strmap(int *map);
    int *map_to_int(int *map, char *buff);
    bsq_t *convert_to_char(bsq_t *bsq);
    void values(bsq_t *bsq, int *bsqa, int *la);
    bsq_t *digits(bsq_t *bsq);
    bsq_t *find_square2(bsq_t *bsq, int i);
    int *map_to_int_2(int *map);
    bsq_t *map_to_char_2(bsq_t *bsq);
    int generator_map(int n, char *str);
    int getnumber(char *str);

#endif
