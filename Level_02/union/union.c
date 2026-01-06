#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    char check[256] = {0};
    char c;

    if (ac == 3)
    {
        while (av[1][i])
        {
            c = av[1][i];
            if (check[(unsigned char)c] == 0)
            {
                write(1, &av[1][i], 1);
                check[(unsigned char)c] = 1;
            }
            i++;
        }
        i = 0;
        while (av[2][i])
        {
            c = av[2][i];
            if (check[(unsigned char)c] == 0)
            {
                write(1, &av[2][i], 1);
                check[(unsigned char)c] = 1;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}