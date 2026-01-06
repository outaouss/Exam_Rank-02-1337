#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int gcd(unsigned int a, unsigned int b)
{
    unsigned int i = a;
    while (i > 0)
    {
        if (a % i == 0 && b % i == 0)
            return i;
        i--;
    }
    return 0;
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int b = gcd((unsigned int)atoi(av[1]), (unsigned int)atoi(av[2]));
        printf("%d", b);
    }
    printf("\n");
}