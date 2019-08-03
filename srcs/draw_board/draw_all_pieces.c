#include "chess.h"
#include "libft.h"

static char		set_piece_color_and_get_piece_value(
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
			return ('R');
	if (piece == 3)
			return ('B');
	if (piece == 2)
			return ('C');
	return ('P');
}

static void		draw_pieces_place_cursor(
					int horizontal_index,
					int vertical_index)
{
	move_cursor_to_absoluth_position((5 + (horizontal_index * 3)),
		(17 + (vertical_index * 5)));
}

static void		draw_piece(
					t_game_data *game_data,
					int horizontal_index,
					int vertical_index)
{
	draw_pieces_place_cursor(horizontal_index, vertical_index);
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
