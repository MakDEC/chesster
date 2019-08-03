#include "chess.h"
#include "libft.h"

void			draw_white_case(
					int line,
					int column)
{
	set_write_white_back();
	move_cursor_to_absoluth_position(line, column);
	ft_putstr("     ");
	move_cursor_to_absoluth_position((line + 1), column);
	ft_putstr("     ");
	move_cursor_to_absoluth_position((line + 2), column);
	ft_putstr("     ");
	restore_write_default_settings();
}

void			draw_all_white_case_of_line(
					int line,
					int column)
{
		int		iteration;

		iteration = -1;
		while (++iteration < 4)
		{
			draw_white_case(line, column);
			column += 10;
		}
}

void			draw_all_white_cases(void)
{
	int		line;
	int		column;
	int		iteration;

	line = 4;
	column = 15;
	iteration = -1;
	while (++iteration < 4)
	{
		draw_all_white_case_of_line(line, column);
		line += 6;
	}
	line = 7;
	column = 20;
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
	draw_board_upper_letters();
	draw_board_upper_line();
	draw_board_numbers();
	draw_all_white_cases();
	draw_all_pieces(game_data);
	move_cursor_on_top_left();
	sleep (3);
}
