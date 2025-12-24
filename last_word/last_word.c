#include <unistd.h>
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

void put(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char *take_last(char *str)
{

    if (!str)
        return NULL;
    int i = 0;
    int len = ft_strlen(str) - 1;
    int start = 0;
    int end = 0;
    while (str[len] == ' ')
        len--;
    end = len;
    // printf("end --> %d\n", end);
    while (str[len] != ' ')
    {
        // printf("len --> %d\n", len);
        if (len == -1)
            break ;
        len--;
    }
    start = len + 1;
    char copy[(end - start) + 1]; 
    while (start <= end)
    {
        copy[i] = str[start];
        start++;
        i++;
    }
    copy[i] = '\0';
    ft_strcpy(str, copy);
    return str;
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        take_last(av[1]);
        put(av[1]);
    }
    write(1, "\n", 1);
}
// #include <stdio.h>
// int main()
// {
//     char str[] = "oussama   ppppp";
//     printf("%s\n", str);
//     take_last(str);

//     printf("%s\n", str);
// }