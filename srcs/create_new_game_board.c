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

void					init_new_game_board(
							t_game_data *game_data)
{
	erase_game_board(game_data);
}

t_game_data				*create_new_game_board(void)
{
	t_game_data			*new_game_data;

	new_game_data = malloc_game_data_struct();
	init_new_game_board(new_game_data);
	return (new_game_data);
}
