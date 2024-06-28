/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "palindrome.h"

bool is_palindrome(char *str)
{
    int i = 0;
    int length = strlen(str) - 1;
    while (length > i) {
        if (str[i] != str[length])
            return false;
        i++;
        length--;
    }
    return true;
}

int calcul_iteration_palindrome(data_flag_t *get_flag, int number)
{
    char *str = NULL;
    get_flag->n = 0;
    char *reverse_original = NULL;
    int original = 0;
    int result = number;
    int reverse = 0;
    int count = 0;
    for (int iteration = 0; result <= get_flag->flag_p; iteration++) {
        str = int_to_char(result);
        reverse_original = my_revstr(str);
        original = atoi(str);
        reverse = atoi(reverse_original);
        result = original + reverse;
        if (number != get_flag->flag_p)
            count++;
        print_calcul_iteration(get_flag, number, result, count);
    }
    return result;
}

char *result_palindrom(data_flag_t *get_flag, int count)
{
    if (get_flag->flag_b == 10) {
        operate_palindrome_base_10(&get_flag);
        return get_flag->data;
    } else {
        operate_palindrome_base_variable(&get_flag, count);
        return get_flag->data;
    }
    return NULL;
}

int palindrome(data_flag_t *get_flag, int count, char **av)
{
    char *str = av[2];
    int n = 0;
    if (strcmp("-n", av[1]) == 0) {
        count = 0;
        while (!(is_palindrome(get_flag->data))) {
            get_flag->data = result_palindrom(get_flag, count);
            count++;
        }
        if (get_flag->flag_b == 10 && (count <= get_flag->flag_imax
            && count >= get_flag->flag_imin)) {
            printf("%s leads to %s in %d iteration(s) in base %d\n", str,
            get_flag->data, count, get_flag->flag_b);
            n++;
        }
        if (get_flag->flag_b != 10 && (count <= get_flag->flag_imax
            && count >= get_flag->flag_imin)) {
            printf("%s leads to %d in %d iteration(s) in base %d\n", str,
            get_flag->lead_result, count - 1, get_flag->flag_b);
            n++;
        }
        if (n == 0)
            printf("no solution\n");
    }
    return 0;
}

int operate_palindrome_p(data_flag_t *get_flag, char **av)
{
    if (strcmp("-p", av[1]) == 0) {
        for (int number = 1; number <= get_flag->flag_p; number++) {
            calcul_iteration_palindrome(get_flag, number);
        }
        if (get_flag->n == 0)
            printf("no solution\n");
    }
    return 0;
}