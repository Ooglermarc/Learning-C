
#include <stdio.h>
#include <stdlib.h>

int		ft_min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

int		pgcd(int a, int b)
{
	int div;
	int i;

	div = 1;
	i = 1;
	while (i <= ft_min(a, b))
	{
		if (a % i == 0 && b % i == 0)
			div = i;
		i++;
	}
	return (div);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%i", pgcd(atoi(av[1]), atoi(av[2])));
	printf("\n");
	return (0);
}
