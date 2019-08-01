#include "chess.h"
#include "libft.h"

void			draw_board_upper_letters(void)
{
	set_write_to_white_color();
	move_cursor_to_absoluth_position(2, 17);
	ft_putchar('A');
	move_cursor_to_absoluth_position(2, 22);
	ft_putchar('B');
	move_cursor_to_absoluth_position(2, 27);
	ft_putchar('C');
	move_cursor_to_absoluth_position(2, 32);
	ft_putchar('D');
	move_cursor_to_absoluth_position(2, 37);
	ft_putchar('E');
	move_cursor_to_absoluth_position(2, 42);
	ft_putchar('F');
	move_cursor_to_absoluth_position(2, 47);
	ft_putchar('G');
	move_cursor_to_absoluth_position(2, 52);
	ft_putchar('H');
	restore_write_default_settings();
}
