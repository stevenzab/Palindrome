/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct data_flag_s
{
    char *flag_n;
    int flag_p;
    int flag_b;
    int flag_imin;
    int flag_imax;
    int flag_h;
    char *data;
    int lead_result;
    int n;
}data_flag_t;

typedef struct stock_error_s
{
    int count;
    int count_n;
    int count_p;
}stock_error_t;

typedef struct linked_list_s
{
    char data;
    struct linked_list_s *next;
}linked_list_t;

#endif /* !STRUCT_H_ */
