#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    unsigned int i = 1;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    while (i <= n / 2)
    {
        i *= 2;
        if (i == n)
            return 1;
    }
    return 0;
}