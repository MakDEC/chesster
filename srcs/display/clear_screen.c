#include <unistd.h>

void				clear_screen(void)
{
	write(1, "\033[2J", 4);
}
