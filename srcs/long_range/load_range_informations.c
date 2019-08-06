#include "chess.h"
#include "long_range_functions_array.h"

void					load_range_informations(
								t_game_data *game_data,
								t_piece *piece)
{
	int					range_index;

	range_index = -1;
	while (++range_index < 8)
		range_functions_array[range_index](game_data, piece, range_index);
}
