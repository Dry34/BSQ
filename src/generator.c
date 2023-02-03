#include "../include/my.h"

int char_to_int(char *num_string) {
    int num = 0;
    int i = 0;
    int is_neg = 0;
    if (num_string[0] == '-') {
        is_neg = 1;
        i = 1;
    }
    while (num_string[i] != '\0') {
        num = num * 10 + (num_string[i] - '0');
        i++;
    }
    if (is_neg)
        num = -num;
    return num;
}

#include <stdio.h>

int getnumber(char *str) {
    int i = 0;
    int n = 0;
    while (str[i] != '\0') {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    return n;
}

int generator(int ac, char **av) {
    int n = getnumber(av[1]); // Get the number from the first argument (argv[0] is the program name)
    char *str = av[2]; // Get the string of characters from the second argument
    int i, f, j;

    for ( ; i < n * n ; i++) {
        for (int f = 0 ; f < n ; f++, i++) {
            printf("%c", str[j]);
            j++;
            if (str[j] == '\0')
                j = 0;
        }
        printf("\n");
    }

    return 0;
}