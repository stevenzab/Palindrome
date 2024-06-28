/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#ifndef PALINDROME_H_
#define PALINDROME_H_
#include "struct.h"

int error_handling(char **av, int ac);
void get_flag(char **av);
int argument_error(char **av, int ac, data_flag_t *get_flag);
void print_usage(void);
int palindrome(data_flag_t *get_flag, int count, char **av);
char *my_revstr(char *str);
int convert_base(data_flag_t *get_flag, int count);
char *palindrome_base(int number, int base);
void operate_palindrome_base_10(data_flag_t **get_flag);
void operate_palindrome_base_variable(data_flag_t **get_flag, int count);
int operate_palindrome_p(data_flag_t *get_flag, char **av);
void operate_palindrom_base_10_limit(data_flag_t **get_flag);
int reverse_integer(int number);
char *int_to_char(int result);
char *result_palindrom(data_flag_t *get_flag, int count);
void init_data(data_flag_t *init_value);
int error_flag_max(char **av, int i, data_flag_t *get_flag);
int is_a_number(char *str);
int count_flag(char **av);
int is_flag(char *str);
int flag_error(char **av);
void print_usage(void);
int get_number(char **av, int ac, data_flag_t *get_flag);
int error_base(char **av, int i, data_flag_t *get_flag);
int get_flag_imax(char **av, int i, data_flag_t *get_flag);
void print_calcul_iteration(data_flag_t *get_flag, int number, int result,
    int count);
#endif /* !PALINDROME_H_ */
