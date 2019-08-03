#include <unistd.h>

void			set_write_white_back(void)
{
	write(1, "\033[47;01m", 8);
}
