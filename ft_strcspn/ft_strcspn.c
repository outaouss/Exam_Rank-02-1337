#include <string.h>
#include <stdio.h>
#include <unistd.h>

size_t ft_strsearch(const char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

size_t ft_strlen(const char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

size_t ft_strcspn(const char *s, const char *reject)
{
    int i = 0;

    while (s[i])
    {
        if (ft_strsearch(reject, s[i]))
            return (i);
        i++;
    }
    return (ft_strlen(s));
}
// int main()
// {
//     size_t x = ft_strcspn("hello World", "hello World");

//     printf("%zu\n", x);
//     // int i = ft_strsearch("oussama", 'z');
//     // printf("%d\n", i);
// }