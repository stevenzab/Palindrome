/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** operate_palindrome
*/

#include "palindrome.h"
#include <stdlib.h>
#include <stdio.h>

char *int_to_char(int result)
{
    char *buffer = malloc(sizeof(int) * 4 + 1);
    if (buffer)
        sprintf(buffer, "%d", result);
    return buffer;
}

void print_calcul_iteration(data_flag_t *get_flag, int number, int result,
    int count)
{
    if (count <= get_flag->flag_imax && count >= get_flag->flag_imin
        && (result == get_flag->flag_p || number == get_flag->flag_p)) {
        printf("%d leads to %d in %d iteration(s) in base %d\n", number,
        get_flag->flag_p, count, get_flag->flag_b);
        get_flag->n++;
    }
}

void operate_palindrome_base_10(data_flag_t **get_flag)
{
    int original = 0;
    int reversed = 0;
    char *reverse_original = NULL;
    int result = 0;

    original = atoi((*get_flag)->data);
    reverse_original = my_revstr((*get_flag)->data);
    reversed = atoi(reverse_original);
    result = original + reversed;
    (*get_flag)->data = int_to_char(result);
}

void operate_palindrome_base_variable(data_flag_t **get_flag, int count)
{
    int original = 0;

    original = atoi((*get_flag)->flag_n) + count;
    (*get_flag)->lead_result = original;

    (*get_flag)->data = palindrome_base(original, (*get_flag)->flag_b);
}