#include <unistd.h>

void			set_write_to_blue_and_bold(void)
{
	write(1, "\033[34;01m", 8);
}
