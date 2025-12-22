#include <unistd.h>

int ft_strsearch(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}
int ft_strlen(char *str)
{
    int i = 0;
    if (!str)
        return (0);
    while (str[i])
    {
        i++;
    }
    return i;
}
int main(int ac, char **av)
{
    int i = 0;
    char string[ft_strlen(av[1])];
    int j = 0;

    if (ac == 3)
    {
        if (av[1] && av[2])
        {
            while (av[1][i])
            {
                if (ft_strsearch(av[2], av[1][i]) && !ft_strsearch(string, av[1][i]))
                {
                    string[j] = av[1][i];
                    write(1, &av[1][i], 1);
                    j++;
                }
                i++;
            }      
        }
    }
    write(1, "\n", 1);
}