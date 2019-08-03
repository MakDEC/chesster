#ifndef RANGE_FUNCTIONS_TAB_H
#define RANGE_FUNCTIONS_TAB_H

#include "chess.h"

int						top_left_range(t_game_data *game_data,
								int horizontal_index, int vertical_index);
int						top_range(t_game_data *game_data,
								int horizontal_index, int vertical_index);
int						top_right_range(t_game_data *game_data,
								int horizontal_index, int vertical_index);
int						right_range(t_game_data *game_data,
								int horizontal_index, int vertical_index);
int						bottom_right_range(t_game_data *game_data,
								int horizontal_index, int vertical_index);
int						bottom_range(t_game_data *game_data,
								int horizontal_index, int vertical_index);
int						bottom_left_range(t_game_data *game_data,
								int horizontal_index, int vertical_index);
int						left_range(t_game_data *game_data,
								int horizontal_index, int vertical_index);

static	int				(*range_functions_tab[8])
								(t_game_data *game_data,
								int horizontal_index,
								int _vertical_index) = {top_left_range,
														top_range,
														top_right_range,
														right_range,
														bottom_right_range,
														bottom_range,
														bottom_left_range,
														left_range};

#endif
