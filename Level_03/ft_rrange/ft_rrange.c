#include <stdlib.h>
#include <stdio.h>

int absolut_val(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

int *ft_rrange(int start, int end)
{
    int i = 0;
    int len = 1 + absolut_val(end - start);
    int *arr = malloc(len * sizeof(int));
    while (i < len)
    {
        arr[i] = end;
        end--;
        i++;
    }
    return arr;
}
