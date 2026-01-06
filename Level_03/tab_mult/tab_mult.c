#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_atoi(char *str)
{
    if (!str)
        return 0;
    int i = 0;
    int result;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return (result);
}

void ft_putnbr(int nb)
{
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + '0');
}
int main(int ac, char **av)
{
    int nb = ft_atoi(av[1]);
    int i = 1;

    if (ac == 2)
    {
        while (i <= 9)
        {
            ft_putnbr(i);
            ft_putchar(' ');
            ft_putchar('x');
            ft_putchar(' ');
            ft_putstr(av[1]);
            ft_putchar(' ');
            ft_putchar('=');
            ft_putchar(' ');
            ft_putnbr(nb * i);
            ft_putchar('\n');
            i++;
        }
    }
    else
        write(1, "\n", 1);
}
