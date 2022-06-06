int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	index;
	int	sort;

	index = 0;
	sort = 1;
	while (index < length - 1 && sort == 1)
	{
		if (f(tab[index], tab[index + 1]) > 0)
		{
			sort = -1;
			break ;
		}
		index++;
	}
	index = 0;
	while (index < length - 1)
	{
		if (sort == 1 && f(tab[index], tab[index + 1]) > 0)
			return (0);
		else if (sort == -1 && f(tab[index], tab[index + 1]) < 0)
			return (0);
		index++;
	}
	return (1);
}
