#include <stdio.h>
#include <unistd.h>

void putchar_ft(char c)
{
    write(1, &c, 1);
}
void putnbr(int n)
{
    if (n >= 10)
        putnbr(n / 10);
    putchar_ft((n % 10) + '0');
}
int ft_atoi(char *str)
{
    int res = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10;
        res += (str[i] - '0');
        i++;
    }
    return res;
}

void fprime(int n)
{
    if (n == 1)
        putnbr(1);
    int div = 1;
    while (n > div++)
    {
        if (n % div == 0)
        {
            putnbr(div);
            if (n == div)
                break ;
            putchar_ft('*');
            n /= div;
            div = 1;
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int a = ft_atoi(av[1]);
        if (a < 0)
        {
            putchar_ft('\n');
            return 0;
        }
        else
            fprime(a);
    }
    putchar_ft('\n');
}