#include <stdio.h>
#include <stdlib.h>

int ft_len(char *src)
{
    int i = 0;
    while (src[i])
        i++;
    return i;
}

char *ft_strdup(char *src)
{
    int i = 0;
    char *copy;

    if (!src)
        return NULL;
    copy = malloc(ft_len(src) + 1);

    while (src[i])
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return copy;
}
