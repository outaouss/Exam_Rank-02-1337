#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int count_word(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i])
    {
        while (str[i] != ' ' && str[i])
            i++;
        count++;
        if (str[i] == ' ')
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
    int word_index = 0;
    int i = 0;
    int words = count_word(str);
    int start = 0;
    int end = 0;
    char **arr = malloc((words + 1) * sizeof(char *));

    while (str[i])
    {
        if (str[i] == ' ')
            i++;
        start = i;
        if (str[i] != ' ' && str[i])
        {
            while (str[i] != ' ' && str[i])
                i++;
        }
        end = i;
        arr[word_index] = ft_substr(str, start, end);
        word_index++;
        if (str[i] == '\0')
            break ;
        i++;
    }
    arr[word_index] = NULL;
    return arr;
}

int len_arr(char **arr)
{
    int i = 0;
    while (arr[i])
        i++;
    return i;
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        char **args = ft_split(av[1]);
        int len = len_arr(args) - 1;
        while (len >= 0)
        {
            ft_putstr(args[len]);
            len--;
            if (len >= 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}
