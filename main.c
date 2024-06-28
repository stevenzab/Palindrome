/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** main
*/

#include "palindrome.h"
#include <stdio.h>
#include <stdlib.h>

void init_data(data_flag_t *init_value)
{
    init_value->flag_b = 10;
    init_value->flag_imin = 0;
    init_value->flag_imax = 100;
}

int main(int ac, char **av)
{
    data_flag_t init_info;
    init_data(&init_info);
    int count = 0;
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        print_usage();
        return 0;
    }
    if (error_handling(av, ac) == 84) {
        printf("invalid argument\n");
        return 84;
    }
    if (ac > 2 && ac < 9) {
        if (get_number(av, ac, &init_info) == 84)
            return 84;
        palindrome(&init_info, count, av);
        operate_palindrome_p(&init_info, av);
    }
    return 0;
}