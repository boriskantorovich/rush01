#include "sudoku.h"

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
