#include <unistd.h>

void				move_cursor_on_top_left(void)
{
	write(1, "\033[H", 3);
}
