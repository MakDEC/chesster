#include "chess.h"
#include "libft.h"

void			black_queen_info_initialization(
					t_game_data *game_data,
					int horizontal_index,
					int vertical_index)
{
	int			index;

	index = 1;
	if (game_data->black_team->team[index] != NULL)
	{
		ft_putstr_fd("Game integrity comprometted (More than one\
				black queen)\n", 2);
		exit(1);
	}
	if (!(game_data->black_team->team[index] = (t_piece *)
					malloc(sizeof(t_piece))))
	{
		ft_putstr_fd("Malloc of black queen failed\n", 2);
		exit (-1);
	}
	game_data->black_team->team[index]->position[0] = vertical_index;
	game_data->black_team->team[index]->position[1] = horizontal_index;
	load_range_informations(game_data, game_data->black_team->team[index]);
}
