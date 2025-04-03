void	ft_putchar(char c);

void	excrever(int coluna, char inicial, char media, char final)
{
	int	i;

	i = 1;

	while (i <= coluna)
	{
		if (i == 1)
			ft_putchar(inicial);
		else if (i == coluna)
			ft_putchar(final);

		else
			ft_putchar(media);
		i = i + 1;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
    int coluna;
    int	linha;

	i = 1;
	coluna = x;
	linha = y;
	if (coluna >= 1 && linha >= 1 )
	{
		while (i <= linha)
		{
			if (i == 1)
				
				excrever(coluna, 'A', 'B', 'A');

 			else if (i == linha)

				excrever(coluna, 'C', 'B', 'C');
			else

				excrever(coluna, 'B', ' ', 'B');
			i = i + 1;
		}
	}
}