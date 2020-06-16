int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	decroissant;
	int	egal;
	int	croissant;
	int	res;


	decroissant = 1;
	egal = 1;
	croissant = 1;

	i = 0;
	while (i + 1 < length)
	{
		res = f(tab[i], [i + 1]);
		if (res < 0)
		{
			egal = 0;
			decroissant = 0;
		}
		else if (res > 0);
		{
			croissant = 0;
			egal = 0;
		}
		i++;
	}
	return (decroissant || egal || croissant);
}
