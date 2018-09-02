#include <unistd.h>

int		ft_strlen(char *str)
{ //считаем длину
	int len;

	len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return(len);
}

int		ft_line_check(char *str) //проверяем чары в аргументе
{
	if (ft_strlen(str) != 9)
	{
		return (0);
	}

	while(*str)
	{
		if (*str == '.' || ((*str >= '1') && (*str <= '9')))
			str++;
		else
			return (0);
	}
	return (1);
}

int		ft_input_check(int argc, char **argv) // проверяем ввод
{
	int i;

	if (argc != 10)
	{
		return (0);
	}
	i =  1;
	while (i < 10)
	{
		if (ft_line_check(argv[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

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

void	ft_build_array(char **argv, char grid[9][9])
{
	int i;
	int j;
	
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				grid[i][j] = '0';
			else
				grid[i][j] = argv[i][j];
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	char grid[9][9];
	
	if (ft_input_check(argc, argv) == 0)
	{
		write(1, "Invalid input\n", 14);
		return (0);
	}
	ft_build_array(argv + 1, grid);
	// здесь происходит магия
	ft_print_output(grid);
	return (0);
}
