#include "chess.h"
#include "libft.h"

void			prep_term()
{
	struct termios	term;

	if (tcgetattr(0, &term) != 0)
	{
		ft_putstr_fd("tcgetattr failed\n", 2);
		exit(-1);
	}
	term.c_lflag &= ~(-ICANON);
	term.c_lflag &= ~(ECHO);
	term.c_lflag &= (ISIG);
	if (tcsetattr(0, 0, &term) != 0)
	{
		ft_putstr_fd("tcsetattr failed\n", 2);
		exit(-1);
	}
}
