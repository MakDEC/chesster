#include "chess.h"
#include "libft.h"

t_game_data				*malloc_game_data_struct(void)
{
	t_game_data			*game_data;

	if (!(game_data = (t_game_data *)malloc(sizeof(t_game_data))))
	{
		ft_putstr_fd("Malloc of t_game_data failed, chess will now exit\n", 2);
		exit(-1);
	}
	return (game_data);
}

void					erase_game_board(
							t_game_data *game_data)
{
	int					horizontal_index;
	int					vertical_index;

	vertical_index = 0;
	while (vertical_index < 8)
	{
		horizontal_index = 0;
		while (horizontal_index < 8)
		{
			game_data->game_board[horizontal_index][vertical_index] = 0;
			horizontal_index++;
		}
		vertical_index++;
	}
}

void					initiale_black_team(
							t_game_data *game_data)
{
	int					horizontal_index;

	game_data->game_board[0][0] = black_tower;
	game_data->game_board[0][7] = black_tower;
	game_data->game_board[0][1] = black_cav;
	game_data->game_board[0][6] = black_cav;
	game_data->game_board[0][2] = black_fou;
	game_data->game_board[0][5] = black_fou;
	game_data->game_board[0][3] = black_king;
	game_data->game_board[0][4] = black_queen;
	game_data->game_board[0][3] = black_king;
	horizontal_index = -1;
	while (++horizontal_index < 8)
		game_data->game_board[1][horizontal_index] = black_pion;
}

void					initiale_white_team(
							t_game_data *game_data)
{
	int					horizontal_index;

	game_data->game_board[7][0] = white_tower;
	game_data->game_board[7][7] = white_tower;
	game_data->game_board[7][1] = white_cav;
	game_data->game_board[7][6] = white_cav;
	game_data->game_board[7][2] = white_fou;
	game_data->game_board[7][5] = white_fou;
	game_data->game_board[7][3] = white_king;
	game_data->game_board[7][4] = white_queen;
	game_data->game_board[7][3] = white_king;
	horizontal_index = -1;
	while (++horizontal_index < 8)
		game_data->game_board[6][horizontal_index] = white_pion;
}

void					init_new_game_board(
							t_game_data *game_data)
{
	erase_game_board(game_data);
	initiale_black_team(game_data);
}

t_game_data				*create_new_game_board(void)
{
	t_game_data			*new_game_data;

	new_game_data = malloc_game_data_struct();
	init_new_game_board(new_game_data);
	return (new_game_data);
}
