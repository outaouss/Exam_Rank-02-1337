#include <unistd.h>

void ft_match(char *str, char *str2)
{
    int i = 0;
    int j = 0;

    while (str[i])
    {
        while (str[i] != str2[j] && str2[j])
            j++;
        if (str2[j] == '\0')
        {
            write(1, "0", 1);
            return ;
        }
        i++;
        j++;
    }
    write(1, "1", 1);
}
int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_match(av[1], av[2]);
    }
    write(1, "\n", 1);
}