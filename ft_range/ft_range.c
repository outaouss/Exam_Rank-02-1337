#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *arr;
    int s = start;
    int e = end;
    int n = 0;
    int i = 0;

    if (end >= start)
    {
        while (e >= s)
        {
            e--;
            n++;
        }
    }
    else
    {
        while (e <= s)
        {
            s--;
            n++;
        }
    }
    arr = malloc(n * sizeof(int));
    if (!arr)
        return (0);
    
    if (end >= start)
    {
        while (i < n)
        {
            arr[i] = start;
            start++;
            i++;
        }
    }
    else
    {
        while (i < n)
        {
            arr[i] = start;
            start--;
            i++;
        }
    }
    return (arr);
}

int main()
{
    int *arr = ft_range(-9, 7);

    int i = 0;
    while (i < 17)
    {
        printf("%d\n", arr[i]);
        i++;
    }
}