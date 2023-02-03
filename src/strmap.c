/*
** EPITECH PROJECT, 2023
** my_strmap
** File description:
** bsq
*/

int strmap(int *map)
{
    int size = 0;
    for (int i = 0; map[i] != -1; i++)
        size++;
    return (size);
}
