#include "libft.h"
#include "chess.h"

int					main(void)
{
	t_game_data		*game_data;

	set_window_size();
	clear_screen();
	move_cursor_on_top_left();
	game_data = create_new_game_board();
	draw_board(game_data);
	free(game_data);
	return (0);
}
