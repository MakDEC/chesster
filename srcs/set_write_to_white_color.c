#include <unistd.h>

void			set_write_to_white_color(void)
{
	write(1, "\033[37;01m", 8);
}
