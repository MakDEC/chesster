#ifndef KNIGHT_RANGE_FUNCTIONS_ARRAY_H
#define KNIGHT_RANGE_FUNCTIONS_ARRAY_H

int						first_knight_range_case(t_game_data *game_data,
								int horizontal_index, int vertical_index);

int						second_knight_range_case(t_game_data *game_data,
								int horizontal_index, int vertical_index);

int						third_knight_range_case(t_game_data *game_data,
								int horizontal_index, int vertical_index);

int						fourth_knight_range_case(t_game_data *game_data,
								int horizontal_index, int vertical_index);

int						fifth_knight_range_case(t_game_data *game_data,
								int horizontal_index, int vertical_index);

int						sixth_knight_range_case(t_game_data *game_data,
								int horizontal_index, int vertical_index);

int						seventh_knight_range_case(t_game_data *game_data,
								int horizontal_index, int vertical_index);

int						eighth_knight_range_case(t_game_data *game_data,
								int horizontal_index, int vertical_index);

static int				(*knight_range_functions_array[8])
							(t_game_data *game_data, int horizontal_index,
							int vertical_index) = {first_knight_range_case,
													second_knight_range_case,
													third_knight_range_case,
													fourth_knight_range_case,
													fifth_knight_range_case,
													sixth_knight_range_case,
													seventh_knight_range_case,
													eighth_knight_range_case};

#endif
