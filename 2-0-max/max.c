//#include <stdio.h>

int			max(int* tab, unsigned int len)
{
	int					m;
	unsigned int		i;

	i = 0;
	m = 0;

	m = tab[i];
	i++;
	while (i <= len)
	{
		if (tab[i] > m)
		{
			m = tab[i];
			i++;
		}
		else 
			i++;
	}
	return (m);
}

//int main()
//{
//	int a[] = {1 ,2 ,3 ,9 ,4 ,5 ,16};
//	printf("%i\n", max(a, 7));
//	return (0);
//}
