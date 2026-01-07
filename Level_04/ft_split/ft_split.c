#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int is_space(char c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}
int count_word(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        while (str[i] && is_space(str[i]))
            i++;
        if (str[i])
            count++;
        while (str[i] && !is_space(str[i]))
            i++;
    }
    return count;
}

char *ft_substr(char *str, int start, int end)
{
    int i = 0;
    char *substring = malloc((end - start) + 1);
    while (start < end)
    {
        substring[i] = str[start];
        i++;
        start++;
    }
    substring[i] = '\0';
    return substring;
}

char **ft_split(char *str)
{
    int i = 0;
    int word_index = 0;
    int len = count_word(str);
    int end = 0;
    int start = 0;
    char **arr = malloc((len + 1) * (sizeof(char *)));

    while (str[i])
    {
        while (is_space(str[i]) && str[i])
            i++;
        if (str[i])
        {
            start = i;
            while (!(is_space(str[i])) && str[i])
                i++;
            end = i;
            arr[word_index] = ft_substr(str, start, end);
            word_index++;
        }
    }
    arr[word_index] = NULL;
    return arr;
}
// int main()
// {
//     char **arr = ft_split("  a    a    a");
//     int i = 0;

//     while (arr[i])
//     {
//         printf("%s\n", arr[i]);
//         i++;
//     }
//     return 0;
// }
