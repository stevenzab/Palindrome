/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** error_flag
*/

#include "palindrome.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_flag(char *str)
{
    if (strcmp("-n", str) != 0 && strcmp("-p", str) != 0 &&
        strcmp("-b", str) != 0 && strcmp("-imin", str) != 0
        && strcmp("-imax", str) != 0)
        return 84;
    return 0;
}

int flag_error(char **av)
{
    for (int i = 0; av[i] != NULL; i++) {
        if (i % 2 == 0 && i != 0 && is_a_number(av[i]) == 84) {
            return 84;
        }
        if (i % 2 != 0 && i != 0 && is_flag(av[i]) == 84) {
            return 84;
        }
    }
    return 0;
}

int flag_max(char **av, int i, int count_imax)
{
    if (strcmp("-imax", av[i]) == 0)
        count_imax++;
    return 0;
}

int error_flag_n_p(char **av, int i, stock_error_t *error)
{
    if (strcmp("-n", av[i]) == 0) {
        error->count_n++;
        error->count++;
    }
    if (strcmp("-p", av[i]) == 0) {
        error->count_p++;
        error->count++;
    }
    return 0;
}

int count_flag(char **av)
{
    stock_error_t error = {0};
    int count_b = 0;
    int count_imin = 0;
    int count_imax = 0;
    for (int i = 0; av[i] != NULL; i++) {
        error_flag_n_p(av, i, &error);
        if (strcmp("-b", av[i]) == 0)
            count_b++;
        if (strcmp("-imin", av[i]) == 0)
            count_imin++;
        flag_max(av, i, count_imax);
    }
    if (error.count_n > 1 || error.count_p > 1 || count_b > 1 || count_imin > 1
        || count_imax > 1 || error.count > 1)
        return 84;
    return 0;
}