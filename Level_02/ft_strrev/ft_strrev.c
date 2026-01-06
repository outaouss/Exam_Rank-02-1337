#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char *ft_strrev(char *str)
{
    int i = ft_strlen(str) - 1;
    char dest[i + 1];
    int j = 0;

    while (i >= 0)
    {
        dest[j] = str[i];
        i--;
        j++;
    }
    dest[j] = '\0';
    ft_strcpy(str, dest);
    return str;
}
