#ifndef LONG_RANGE_FUNCTIONS_TAB_H
#define LONG_RANGE_FUNCTIONS_TAB_H

#include "chess.h"

void					top_left_range(t_game_data *game_data,
								t_piece *piece,
								int range_index);

void					top_range(t_game_data *game_data,
								t_piece *piece,
								int range_index);

void					top_right_range(t_game_data *game_data,
								t_piece *piece,
								int range_index);

void					right_range(t_game_data *game_data,
								t_piece *piece,
								int range_index);

void					bottom_right_range(t_game_data *game_data,
								t_piece *piece,
								int range_index);

void					bottom_range(t_game_data *game_data,
								t_piece *piece,
								int range_index);

void					bottom_left_range(t_game_data *game_data,
								t_piece *piece,
								int range_index);

void					left_range(t_game_data *game_data,
								t_piece *piece,
								int range_index);

static	void			(*range_functions_array[8])
								(t_game_data *game_data,
								t_piece *piece,
								int range_index) = {top_left_range,
													top_range,
													top_right_range,
													right_range,
													bottom_right_range,
													bottom_range,
													bottom_left_range,
													left_range};

#endif
