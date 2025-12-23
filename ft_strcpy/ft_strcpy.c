char *ft_strcpy(char *s1, char *s2)
{
    int i= 0;
    int j = 0;

    while (s2[j])
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return (s1);
}
// #include <stdio.h>
// int main()
// {
//     char src[] = "oussama";
//     char dst[] = "";
//     char *check = ft_strcpy(dst, src);
//     printf("%s\n", check);
//     printf("%s\n", dst);
// }