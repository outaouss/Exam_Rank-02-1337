#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] == 'a')
                av[1][i] = 'z';
            else if (av[1][i] == 'b')
                av[1][i] = 'y';
            else if (av[1][i] == 'c')
                av[1][i] = 'x';
            else if (av[1][i] == 'd')
                av[1][i] = 'w';
            else if (av[1][i] == 'e')
                av[1][i] = 'v';
            else if (av[1][i] == 'f')
                av[1][i] = 'u';
            else if (av[1][i] == 'g')
                av[1][i] = 't';
            else if (av[1][i] == 'h')
                av[1][i] = 's';
            else if (av[1][i] == 'i')
                av[1][i] = 'r';
            else if (av[1][i] == 'j')
                av[1][i] = 'q';
            else if (av[1][i] == 'k')
                av[1][i] = 'p';
            else if (av[1][i] == 'l')
                av[1][i] = 'o';
            else if (av[1][i] == 'm')
                av[1][i] = 'n';
            else if (av[1][i] == 'n')
                av[1][i] = 'm';
            else if (av[1][i] == 'o')
                av[1][i] = 'l';
            else if (av[1][i] == 'p')
                av[1][i] = 'k';
            else if (av[1][i] == 'q')
                av[1][i] = 'j';
            else if (av[1][i] == 'r')
                av[1][i] = 'i';
            else if (av[1][i] == 's')
                av[1][i] = 'h';
            else if (av[1][i] == 't')
                av[1][i] = 'g';
            else if (av[1][i] == 'u')
                av[1][i] = 'f';
            else if (av[1][i] == 'v')
                av[1][i] = 'e';
            else if (av[1][i] == 'w')
                av[1][i] = 'd';
            else if (av[1][i] == 'x')
                av[1][i] = 'c';
            else if (av[1][i] == 'y')
                av[1][i] = 'b';
            else if (av[1][i] == 'z')
                av[1][i] = 'a';
//// Uppercase
            else if (av[1][i] == 'A')
                av[1][i] = 'Z';
            else if (av[1][i] == 'B')
                av[1][i] = 'Y';
            else if (av[1][i] == 'C')
                av[1][i] = 'X';
            else if (av[1][i] == 'D')
                av[1][i] = 'W';
            else if (av[1][i] == 'E')
                av[1][i] = 'V';
            else if (av[1][i] == 'F')
                av[1][i] = 'U';
            else if (av[1][i] == 'G')
                av[1][i] = 'T';
            else if (av[1][i] == 'H')
                av[1][i] = 'S';
            else if (av[1][i] == 'I')
                av[1][i] = 'R';
            else if (av[1][i] == 'J')
                av[1][i] = 'Q';
            else if (av[1][i] == 'K')
                av[1][i] = 'P';
            else if (av[1][i] == 'L')
                av[1][i] = 'O';
            else if (av[1][i] == 'M')
                av[1][i] = 'N';
            else if (av[1][i] == 'N')
                av[1][i] = 'M';
            else if (av[1][i] == 'O')
                av[1][i] = 'L';
            else if (av[1][i] == 'P')
                av[1][i] = 'K';
            else if (av[1][i] == 'Q')
                av[1][i] = 'J';
            else if (av[1][i] == 'R')
                av[1][i] = 'I';
            else if (av[1][i] == 'S')
                av[1][i] = 'H';
            else if (av[1][i] == 'T')
                av[1][i] = 'G';
            else if (av[1][i] == 'U')
                av[1][i] = 'F';
            else if (av[1][i] == 'V')
                av[1][i] = 'E';
            else if (av[1][i] == 'W')
                av[1][i] = 'D';
            else if (av[1][i] == 'X')
                av[1][i] = 'C';
            else if (av[1][i] == 'Y')
                av[1][i] = 'B';
            else if (av[1][i] == 'Z')
                av[1][i] = 'A';
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}