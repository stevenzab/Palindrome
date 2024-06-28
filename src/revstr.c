/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** revstr
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

char *my_revstr(char *str)
{
    char *tmp = NULL;
    int i = 0;
    int length = my_strlen(str) - 1;
    tmp = malloc(sizeof(char) * (length) + 1);
    while (length >= 0) {
        tmp[i] = str[length];
        length--;
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}