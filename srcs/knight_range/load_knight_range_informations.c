#include "chess.h"
#include "knight_range_functions_array.h"

void		load_knight_range_informations(
				t_game_data *game_data,
				t_piece *piece)
{
	int		array_index;

	array_index = -1;
	while (++array_index < 8)
		piece->knight_range[array_index] = knight_range_functions_array
			[array_index](game_data, piece->position[1], piece->position[0]);
}
