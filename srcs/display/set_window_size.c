#include <unistd.h>
#include <sys/ioctl.h>

void				set_window_size(void)
{
	write(1, "\033[8;30;80t", 10);
}
