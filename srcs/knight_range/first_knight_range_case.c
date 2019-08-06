#include "chess.h"

/*
**	The first knight range case correspond to the index 0 of the
**	knight range array
*/

int						first_knight_range_case(
							t_game_data *game_data,
							int horizontal_index,
							int vertical_index)
{
	if (horizontal_index >= 2 && vertical_index >= 1)
		return (game_data->game_board
			[horizontal_index - 2][vertical_index - 1]);
	return (-1);
}
