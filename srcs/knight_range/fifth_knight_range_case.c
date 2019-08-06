#include "chess.h"

int						fifth_knight_range_case(
							t_game_data *game_data,
							int horizontal_index,
							int vertical_index)
{
	if (horizontal_index <= 5 && vertical_index <= 6)
		return (game_data->game_board
			[horizontal_index + 2][vertical_index + 1]);
	return (-1);
}
