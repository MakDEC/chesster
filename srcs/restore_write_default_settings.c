#include <unistd.h>

void			restore_write_default_settings(void)
{
	write(1, "\033[0m", 4);
}
