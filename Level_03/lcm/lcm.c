#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if(!a || !b)
        return 0;
    unsigned int i = 1;
    while(i < 2147483647)
    {
        if(i % a == 0 && i % b == 0)
            return i;
        i++;
    }
    return i;
}