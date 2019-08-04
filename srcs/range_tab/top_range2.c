#include "chess.h"

void		top_range(
				t_game_data *game_data,
				t_piece *piece,
				int	range_index)
{
	int		horizontal_index;
	int		distance;

	horizontal_index = piece->position[1];
	distance = 1;
	while (--horizontal_index >= 0)
	{
		if (game_data->game_board[horizontal_index][vertical_index] != 0)
		{
			piece->in_range[range_index][0] = game_data->\
				game_board[horizontal_index][vertical_index];
			piece->in_range[range_index][1] = distance; 
			return ;
		}
		++distance;
	}
	piece->in_range[range_index][0] = 0;
	piece->in_range[range_index][1] = distance;
}
