#include "chess.h"

/*
**	The second knight range case correspond to the index 1 of the
**	knight range array
*/

int						second_knight_range_case(
							t_game_data *game_data,
							int horizontal_index,
							int vertical_index)
{
	if (horizontal_index >= 2 && vertical_index <= 6)
		return (game_data->game_board
			[horizontal_index - 2][vertical_index + 1]);
	return (-1);
}
