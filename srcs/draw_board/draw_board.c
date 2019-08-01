#include "chess.h"
#include "libft.h"

void			set_write_white_back(void)
{
	write(1, "\033[47;01m", 8);
}

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

int				is_white_case(
					int horizontal_index,
					int vertical_index)
{
	return (((horizontal_index + vertical_index) % 2) == 0 ? 1 : 0);
}

void			set_write_to_red_and_bold(void)
{
	write(1, "\033[31;01m", 8);
}

void			set_write_to_blue_and_bold(void)
{
	write(1, "\033[34;01m", 8);
}

char			set_piece_color_and_get_piece_value(
					t_game_data *game_data,
					int horizontal_index,
					int vertical_index)
{
	char		piece;

	piece = game_data->game_board[horizontal_index][vertical_index];
	if (piece > 6)
	{
		set_write_to_red_and_bold();
		piece -= 6;
	}
	else
		set_write_to_blue_and_bold();
	if (piece == 6)
			return ('K');
	if (piece == 5)
			return ('Q');
	if (piece == 4)
			return ('T');
	if (piece == 3)
			return ('F');
	if (piece == 2)
			return ('C');
	return ('P');
}

void			place_cursor(
					int horizontal_index,
					int vertical_index)
{
	move_cursor_to_absoluth_position((5 + (horizontal_index * 3)),
		(17 + (vertical_index * 5)));
}

void			draw_piece(
					t_game_data *game_data,
					int horizontal_index,
					int vertical_index)
{
	(void)game_data;
	place_cursor(horizontal_index, vertical_index);
	if (is_white_case(horizontal_index, vertical_index) == 1)
		set_write_white_back();
	ft_putchar(set_piece_color_and_get_piece_value(
			game_data, horizontal_index, vertical_index));
	restore_write_default_settings();
}

void			draw_all_pieces(
					t_game_data *game_data)
{
	int			horizontal_index;
	int			vertical_index;

	horizontal_index = -1;
	vertical_index = -1;
	while (++horizontal_index < 8)
	{
		vertical_index = -1;
		while (++vertical_index < 8)
		{
			if (game_data->game_board[horizontal_index][vertical_index] != 0)
				draw_piece(game_data, horizontal_index, vertical_index);
		}
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
