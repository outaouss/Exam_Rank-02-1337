#include <unistd.h>
#include <stdio.h>

int ft_search(char c, char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return 0;
        i++;
    }
    return 1;
}
int main(int ac, char **av)
{
    int i = 0;
    char c;
    char check[256] = {0};

    if (ac == 3)
    {
        while (av[1][i] && av[2])
        {
            c = av[1][i];
            if (check[(unsigned char)c] == 0 && ft_search(av[1][i], av[2]) == 0)
            {
                write(1, &av[1][i], 1);
                check[(unsigned char)c] = 1;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}