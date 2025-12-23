void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

// #include <stdio.h>

// int main()
// {

//     int a = 45;
//     int b = 55;
//     printf("before --> [ %d ]--[ %d ]\n",a, b);
//     ft_swap(&a, &b);

//     printf("after --> [ %d ]--[ %d ]\n",a, b);
// }