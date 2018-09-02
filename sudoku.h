#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H
#include <unistd.h>

void	ft_build_array(char **argv, char grid[9][9]);
int		ft_strlen(char *str);
int		ft_line_check(char *str);
int		ft_input_check(int argc, char **argv);
void	ft_print_output(char grid[9][9]);

#endif
