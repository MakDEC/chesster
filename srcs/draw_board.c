#include "chess.h"
#include "libft.h"

void			move_cursor_to_absoluth_position(
					int line,
					int column)
{
	char		buffer[1024];
	char		*ret_itoa;

	ft_bzero(buffer, 1024);
	ft_strcat(buffer, "\033[");
	ret_itoa = ft_itoa(line);
	ft_strcat(buffer, ret_itoa);
	free(ret_itoa);
	ft_strcat(buffer, ";");
	ret_itoa = ft_itoa(column);
	ft_strcat(buffer, ret_itoa);
	free(ret_itoa);
	ft_strcat(buffer, "H");
	write(1, buffer, ft_strlen(buffer));
}

void			draw_board_upper_line(void)
{
	int			iteration_number;
	char		buffer[1024];

	iteration_number = -1;
	ft_bzero(buffer, 1024);
	while (++iteration_number < 60)
		ft_strcat(buffer, " ");
	move_cursor_to_absoluth_position(3, 15);
	write(1, "\033[37;04m", 8);
	ft_putstr(buffer);
	write(1, "\033[0m", 4);
}

void			draw_board_bottom_line(void)
{
	int			iteration_number;
	char		buffer[1024];

	iteration_number = -1;
	ft_bzero(buffer, 1024);
	while (++iteration_number < 60)
		ft_strcat(buffer, " ");
	move_cursor_to_absoluth_position(28, 15);
	write(1, "\033[37;04m", 8);
	ft_putstr(buffer);
	write(1, "\033[0m", 4);
}

void			draw_white_case(
					int line,
					int column)
{
	move_cursor_to_absoluth_position(line, column);
	write(1, "\033[47;01m", 8);
	ft_putstr("      ");
	move_cursor_to_absoluth_position((line + 1), column);
	write(1, "\033[47;01m", 8);
	ft_putstr("      ");
	move_cursor_to_absoluth_position((line + 2), column);
	write(1, "\033[47;01m", 8);
	ft_putstr("      ");
	write(1, "\033[0m", 4);
}

void			draw_all_white_case_of_line(
					int line,
					int column)
{
		int		iteration;

		iteration = 0;
		while (column <= 69)
		{
			draw_white_case(line, column);
			column += 12;
			iteration++;
		}
}

void			draw_all_white_cases(void)
{
	int		line;
	int		column;
	int		iteration;

	line = 4;
	column = 21;
	iteration = -1;
	while (++iteration < 4)
	{
		draw_all_white_case_of_line(line, column);
		line += 6;
	}
	line = 7;
	column = 15;
	iteration = -1;
	while (++iteration < 4)
	{
		draw_all_white_case_of_line(line, column);
		line += 6;
	}
}

void			draw_board(
					t_game_data *game_data)
{
	(void)game_data;
	draw_board_upper_line();
	draw_board_bottom_line();
	draw_all_white_cases();
	sleep(3);
	ft_putchar('\n');
}
