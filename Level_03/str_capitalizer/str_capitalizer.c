#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	int j = 1;
	int flag;
	if (ac == 1)
	{
		write(1, "\n", 1);
		return 0;
	}
	if (ac > 1)
	{
		while (av[j])
		{
		    i = 0;   
		    flag = 1;
		    while (av[j][i])
		    {
		        if ((av[j][i] >= 'a' && av[j][i] <= 'z') || (av[j][i] >= 'A' && av[j][i] <= 'Z'))
		        {
		            if (flag == 1) 
		            {
		                if (av[j][i] >= 'a' && av[j][i] <= 'z')
		                    av[j][i] -= 32;
		                flag = 0;
		            }
		            else if (flag == 0)
		            {
		                if (av[j][i] >= 'A' && av[j][i] <= 'Z')
		                    av[j][i] += 32;
		            }
		        }
		        else if (av[j][i] >= '0' && av[j][i] <= '9')
		            flag = 0; 
		        else
		            flag = 1;
		        write(1, &av[j][i], 1);
		        i++;
		    }
		    j++;
			write(1, "\n", 1);
		}
	}
}
