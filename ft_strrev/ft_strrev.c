#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

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

char *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_strlen(str) - 1;
    char rev[len + 1];
    while (len >= 0)
    {
        rev[i] = str[len];
        i++;
        len--;
    }
    rev[i] = '\0';
    ft_strcpy(str, rev);
    return str;
}

// int main()
// {
//     char str[] = "zaz";
//     ft_strrev(str);

//     printf("%s\n", str);
// }