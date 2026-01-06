#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_search(const char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return 0;
        i++;
    }
    return 1;
}

size_t ft_strcspn(const char *s, const char *reject)
{
    int i = 0;

    while (s[i])
    {
        if (ft_search(reject, s[i]) == 0)
            return i;
        i++;
    }
    return i;
}
