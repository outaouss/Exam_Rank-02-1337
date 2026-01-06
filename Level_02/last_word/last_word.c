#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = ft_strlen(av[1]) - 1;
        while (av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13))
            i--;
        int end = i;
        while (av[1][i] != ' ' && i >= 0)
            i--;
        int start = i + 1;
        while (start <= end)
        {
            write(1, &av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
}