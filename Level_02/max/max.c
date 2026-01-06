int max(int *tab, unsigned int len)
{
    int i = 0;
    int big = 0;
    int len_l = len;

    if (len == 0)
        return 0;
    while (len_l >= 0)
    {
        if (tab[i] > big)
            big = tab[i];
        len_l--;
        i++;
        if (len_l == -1)
            break ;
    }
    return big;
}
