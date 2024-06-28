/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** base
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "palindrome.h"

void add_char(char c, linked_list_t **head_ref)
{
    linked_list_t *new_element = malloc(sizeof(linked_list_t));

    new_element->data  = c;

    new_element->next = NULL;

    linked_list_t *last = *head_ref;

    if (*head_ref == NULL) {
        *head_ref = new_element;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_element;
    return;
}

int get_len_linked_list(linked_list_t *head)
{
    int count = 0;
    linked_list_t *cpy = head;
    while (cpy != NULL) {
        count++;
        cpy = cpy->next;
    }
    return count;
}

char *linked_list_to_string(linked_list_t *node)
{
    char *str = NULL;
    int i = 0;
    str = malloc(sizeof(char) * get_len_linked_list(node) + 1);
    while (node != NULL)
    {
        str[i] = node->data;
        node = node->next;
        i++;
    }
    str[i] = '\0';
    return str;
}

char *palindrome_base(int number, int base)
{
    linked_list_t *node = NULL;

    char *str = NULL;
    while (number > 0) {
        int digit = number % base;
        number = number / base;
        add_char(digit + '0', &node);
    }
    str = linked_list_to_string(node);
    str = my_revstr(str);
    return str;
}