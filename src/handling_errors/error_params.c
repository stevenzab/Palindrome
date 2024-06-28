/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** error_params
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "palindrome.h"

bool is_digit(char c)
{
    if (c < '0' || c > '9')
        return false;
    return true;
}

int is_a_number(char *str)
{
    for (int i = 0; str[i] != '\0'; ++i) {
        if (!(is_digit(str[i]))) {
            return 84;
        }
    }
    return 0;
}

int get_flag_imax(char **av, int i, data_flag_t *get_flag)
{
    if (strcmp("-imax", av[i]) == 0 && av[i + 1] != NULL
        && is_a_number(av[i + 1]) == 0)
        get_flag->flag_imax = atoi(av[i + 1]);
    if (get_flag->flag_imax < 0 || get_flag->flag_imax > 100) {
        printf("invalid argument\n");
        return 84;
    }
    if (strcmp("-imin", av[i]) == 0 && is_a_number(av[i + 1]) == 0)
        get_flag->flag_imin = atoi(av[i + 1]);
    if (get_flag->flag_imin < 0 || get_flag->flag_imin > get_flag->flag_imax) {
        printf("invalid argument\n");
        return 84;
    }
    return 0;
}

int get_number(char **av, int ac, data_flag_t *get_flag)
{
    for (int i = 1; i < ac; i++) {
        if (strcmp("-n", av[i]) == 0 && av[i + 1] != NULL
            && is_a_number(av[i + 1]) == 0) {
            get_flag->flag_n = av[i + 1];
            get_flag->data = av[i + 1];
        }
        if (strcmp("-p", av[i]) == 0 && av[i + 1] != NULL
            && is_a_number(av[i + 1]) == 0) {
            get_flag->flag_p = atoi(av[i + 1]);
            get_flag->data = strdup(av[i + 1]);
        }
        if (strcmp("-b", av[i]) == 0 && av[i + 1] != NULL
            && is_a_number(av[i + 1]) == 0) {
            get_flag->flag_b = atoi(av[i + 1]);
        }
        if (error_base(av, i, get_flag) == 84)
            return 84;
    }
    return 0;
}