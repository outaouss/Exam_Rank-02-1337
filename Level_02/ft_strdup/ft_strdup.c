#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
char *ft_strdup(char *src)
{
    char *dest = NULL;
    int i = 0;

    dest = malloc(ft_strlen(src));
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
