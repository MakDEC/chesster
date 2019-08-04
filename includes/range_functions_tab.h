#ifndef RANGE_FUNCTIONS_TAB_H
#define RANGE_FUNCTIONS_TAB_H

#include "chess.h"

void					top_left_range(t_game_data *game_data,
								t_piece *piece,
								int range_index);

static	void			(*range_functions_tab[8])
								(t_game_data *game_data,
								t_piece *piece,
								int range_index) = {top_left_range};

#endif
