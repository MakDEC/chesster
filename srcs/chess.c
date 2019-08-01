#include "libft.h"
#include "chess.h"

int					main(void)
{
	t_game_data		*game_data;
	struct termios	original_term_config;

	if (tcgetattr(0, &original_term_config) != 0)
	{
		ft_putstr_fd("tcgetattr failed\n", 2);
		exit(-1);
	}
	set_window_size();
	clear_screen();
	prep_term();
	game_data = create_new_game_board();
	draw_board(game_data);
	tcsetattr(0, 0, &original_term_config);
	free(game_data);
	return (0);
}
