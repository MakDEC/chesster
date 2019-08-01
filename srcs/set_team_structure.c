#include "chess.h"
#include "libft.h"

static void		malloc_teams_structure(
					t_game_data *game_data)
{
	if (!(game_data->white_team = (t_team *)malloc(sizeof(t_team))))
	{
		ft_putstr_fd("team structure malloc failed\n", 2);
		exit (-1);
	}
	if (!(game_data->black_team = (t_team *)malloc(sizeof(t_team))))
	{
		ft_putstr_fd("team structure malloc failed\n", 2);
		exit (-1);
	}
}

void			set_team_structure(
					t_game_data *game_data)
{
	int			horizontal_index;
	int			vertical_index;

	(void)game_data;
	malloc_teams_structure(game_data);
	horizontal_index = -1;
	while (++horizontal_index < 8)
	{
		vertical_index = -1;
		while (++vertical_index < 8)
		{
			if (game_data->game_board[vertical_index][horizontal_index] != 0)
				//add_piece_informations(vertical_index, horizontal_index);
				continue ;
		}
	}
}
