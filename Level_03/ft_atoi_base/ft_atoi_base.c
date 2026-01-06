int get_value(char c)
{
    char *base = "0123456789abcdef";
    char *base_upper = "0123456789ABCDEF";
    int i = 0;

    while (i < 16)
    {
        if (c == base[i] || c == base_upper[i])
            return (i);
        i++;
    }
    return (-1); // Not found
}

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int n = 0;
    int sign = 1;
    int val;

    if (str[i] == '-')
    {
        sign = -sign;
        i++;
    }
    while (str[i])
    {
        val = get_value(str[i]);
        if (val != -1 && val < str_base)
            n = n * str_base + val;
        else
            break ;
        i++;
    }
    return (n * sign);
}