#include "libft.h"
#include "chess.h"

void			draw_board_upper_line(void)
{
	int			iteration_number;
	char		buffer[1024];

	iteration_number = -1;
	ft_bzero(buffer, 1024);
	while (++iteration_number < 40)
		ft_strcat(buffer, " ");
	move_cursor_to_absoluth_position(3, 15);
	write(1, "\033[37;04m", 8);
	ft_putstr(buffer);
	write(1, "\033[0m", 4);
}
