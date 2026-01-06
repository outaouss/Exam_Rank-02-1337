#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int flag = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            flag = 0;
            if (av[1][i + 1] >= 'A' && av[1][i + 1] <= 'Z')
            {
                write(1, &av[1][i], 1);
                write(1, "_", 1);
                av[1][i + 1] += 32;
                write(1, &av[1][i + 1], 1);
                flag = 1;
                i++;
                if (av[1][i + 1] >= 'A' && av[1][i + 1] <= 'Z')
                {
                    write(1, "_", 1);
                    av[1][i + 1] += 32;
                    write(1, &av[1][i + 1], 1);
                    i++;
                }
            }
            if (flag == 0)
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}