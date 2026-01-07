#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int temp;
    int swapped = 1;

    while (swapped)
    {
        swapped = 0;
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                swapped = 1;
            }
            i++;
        }
    }
}

// int main()
// {
//     int tab[] = {5, 6 , 1, 3};

//     sort_int_tab(tab, 4);
//     printf("[ %d ],", tab[0]);
//     printf("[ %d ],", tab[1]);
//     printf("[ %d ],", tab[2]);
//     printf("[ %d ],", tab[3]);
//     printf("\n");
// }