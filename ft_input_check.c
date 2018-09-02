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
