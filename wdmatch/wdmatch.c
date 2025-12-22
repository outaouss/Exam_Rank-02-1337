#include <unistd.h>

void pstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
void matching(char *str, char *s2)
{
	int i  = 0;
	int j = 0;

	while (str[i])
	{
		while (str[i] != s2[j] && s2[j])
			j++;
		if (s2[j] == '\0')
			return ;
		i++;
		j++;
	}
	pstr(str);
}
int main (int ac, char **av)
{
	if (ac == 3)
	{
		matching(av[1], av[2]);
	}
	write(1, "\n", 1);
}