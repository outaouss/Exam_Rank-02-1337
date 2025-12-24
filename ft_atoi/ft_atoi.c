#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return result * sign;
}

// int main()
// {
//     int i = ft_atoi("     -   455");
//     // int i = ft_atoi("      -455");

//     printf("%d\n", i);
// }