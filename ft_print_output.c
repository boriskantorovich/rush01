void	ft_print_output(char grid[9][9])
{
	int i;
	int j;
	
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &grid[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
