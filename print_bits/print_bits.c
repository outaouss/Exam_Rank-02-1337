#include <unistd.h>
#include <stdio.h>
void print_bits(unsigned char octet)
{
    int i = 7;
    int bit = 0;
    int c;

    // 0000 0001
    while (i >= 0)
    {
        bit = octet >> i & 1;
        i--;
        c = bit + '0';
        write(1, &c, 1); 
    }
}

// int main()
// {
//     print_bits(1);
// }