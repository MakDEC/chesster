#include "chess.h"
#include "range_functions_tab.h"

void			load_range_informations(
						t_game_data *game_data,
						t_piece *piece)
{
	int			range_tab_index;

	range_tab_index = -1;
	while (++range_tab_index < 8)
		range_functions_tab[range_tab_index]
			(game_data, piece, range_tab_index);
	
}
