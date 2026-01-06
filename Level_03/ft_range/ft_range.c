#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int *arr;
    int s = start;
    int e = end;
    int i = 0;
    int n = 0;

    if (end >= start)
    {
        while (e >= start)
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
    arr = malloc(n * sizeof(int) + 1);
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
    return arr;
}
