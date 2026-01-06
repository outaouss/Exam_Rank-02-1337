#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[1] && av[2] && av[3])
        {
            int one = atoi(av[1]);
            int three = atoi(av[3]);
            if (av[2][0] == '+')
                printf("%d", one + three);
            else if (av[2][0] == '-')
                printf("%d", one - three);
            else if (av[2][0] == '*')
                printf("%d", one * three);
            else if (av[2][0] == '/')
                printf("%d", one / three);
            else if (av[2][0] == '%')
                printf("%d", one % three);
        }
    }
    printf("\n");
}