#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int i = 0;
    int counter = 0;
    int tmp = tab[0];

    if (!tab || len == 0)
        return (0);
    while (i < len)
    {
        if (tab[i] > tmp)
        {
            tmp = tab[i];
        }
        i++;
    }
    return (tmp);
}
