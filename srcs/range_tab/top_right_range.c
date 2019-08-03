#include "chess.h"

int			top_right_range(
				t_game_data *game_data,
				int horizontal_index,
				int vertical_index)
{
	while (--horizontal_index >= 0 && ++vertical_index <= 7)
	{
		if (game_data->game_board[horizontal_index][vertical_index] != 0)
				return (game_data->game_board[horizontal_index][vertical_index]);
	}
	return (0);
}
