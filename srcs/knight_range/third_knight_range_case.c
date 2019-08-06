#include "chess.h"

/*
**	The third knight range case correspond to the index 2 of the
**	knight range array
*/

int						third_knight_range_case(
							t_game_data *game_data,
							int horizontal_index,
							int vertical_index)
{
	if (horizontal_index >= 1 && vertical_index <= 5)
		return (game_data->game_board
			[horizontal_index - 1][vertical_index + 2]);
	return (-1);
}
