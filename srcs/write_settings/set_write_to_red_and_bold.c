#include <unistd.h>

void			set_write_to_red_and_bold(void)
{
	write(1, "\033[31;01m", 8);
}
