#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
void ft_search(char *str, char *s2)
{
    int i = 0;
    int j = 0;
    while (str[i])
    {
        while (str[i] != s2[j] && s2[j])
        {
            j++;
        }
        if (s2[j] == '\0')
            return ;
        i++;
        j++;
    }
    ft_putstr(str);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_search(av[1], av[2]);
    }
    write(1, "\n", 1);
}
