#include "chess.h"

void		bottom_left_range(
				t_game_data *game_data,
				t_piece *piece,
				int	range_index)
{
	int		horizontal_index;
	int		vertical_index;
	char	distance;

	horizontal_index = piece->position[1];
	vertical_index = piece->position[0];
	distance = 1;
	while (++horizontal_index <= 7 && --vertical_index >= 0)
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
