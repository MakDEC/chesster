#include "chess.h"
#include "libft.h"

void			draw_board_numbers(void)
{
	set_write_to_white_color();
	move_cursor_to_absoluth_position(5, 11);
	ft_putchar('1');
	move_cursor_to_absoluth_position(8, 11);
	ft_putchar('2');
	move_cursor_to_absoluth_position(11, 11);
	ft_putchar('3');
	move_cursor_to_absoluth_position(14, 11);
	ft_putchar('4');
	move_cursor_to_absoluth_position(17, 11);
	ft_putchar('5');
	move_cursor_to_absoluth_position(20, 11);
	ft_putchar('6');
	move_cursor_to_absoluth_position(23, 11);
	ft_putchar('7');
	move_cursor_to_absoluth_position(26, 11);
	ft_putchar('8');
	restore_write_default_settings();
}
