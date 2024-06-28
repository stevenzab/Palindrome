/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** handle_errors
*/

#include <stdio.h>
#include <stdlib.h>
#include "palindrome.h"

void print_usage(void)
{
    printf("USAGE\n");
    printf("       ./palindrome -n number -p palindrome ");
    printf("[-b base] [-imin i] [-imax i]\n");
    printf("\nDESCRIPTION\n");
    printf("        -n n      integer to be transformed (>=0)\n");
    printf("        -p pal    palindromic number to be obtained");
    printf(" (incompatbile with the -n\n                  option) (>=0)\n");
    printf("                  if defined, all fitting values of n");
    printf(" will be output\n");
    printf("       -b base    base in which the procedure will be executed ");
    printf("(1<b<=10) [def: 10]\n       -imin i    minimum number of ");
    printf("iterations, included (>=0) [def: 0]\n       -imax i    maximum ");
    printf("number of iterations, included (>=0) [def: 100]\n");
}

int error_base(char **av, int i, data_flag_t *get_flag)
{
    if (get_flag_imax(av, i, get_flag) == 84)
        return 84;
    if (get_flag->flag_b < 1 || get_flag->flag_b > 10) {
        printf("invalid argument\n");
        return 84;
    }
    return 0;
}

int error_handling(char **av, int ac)
{
    if (ac % 2 == 0) {
        printf("invalid argument\n");
        return 84;
    }
    if (flag_error(av) == 84)
        return 84;
    if (count_flag(av) == 84)
        return 84;
    return 0;
}