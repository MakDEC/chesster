#include "chess.h"

int						seventh_knight_range_case(
							t_game_data *game_data,
							int horizontal_index,
							int vertical_index)
{
	if (horizontal_index <= 6 && vertical_index >= 2)
		return (game_data->game_board
			[horizontal_index + 1][vertical_index - 2]);
	return (-1);
}
