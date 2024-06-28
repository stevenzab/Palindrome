/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** requirement
*/

#include <stdio.h>

int my_factrec_synthesis(int nb)
{
    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    return nb * my_factrec_synthesis(nb - 1);
}

int my_squareroot_synthesis(int nb)
{
    int count = 1;
    int result = 1;
    if (nb < 0)
        return -1;
    if (nb == 0 || nb == 1)
        return nb;
    while (result <= nb && count < 43341) {
        count++;
        result = count * count;
        if (result == nb)
            return count;
    }
    return -1;
}