#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int count_nb(int nb)
{
    int count = 0;

    if (nb >= 0 && nb <= 9)
        return 1;
    if (nb < 0)
    {
        nb = -nb;
        count++;
    }
    while (nb >= 10)
    {
        count++;
        nb = nb / 10;
        if (nb < 10)
            count++;
    }
    return count;
}

char    *ft_itoa(int nbr)
{
    int n = count_nb(nbr);
    int sign = 0;
    if (nbr < 0)
        sign = 1;
    char *str = malloc(n + 1 + sign);
    int i = 0;
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }
    i = n - 1;
    while (i >= sign)
    {
        str[i] = (nbr % 10) + '0';
        nbr = nbr / 10;
        i--;
    }
    str[n] = '\0';
    return str;
}
