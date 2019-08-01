#include "chess.h"
#include "libft.h"

void			move_cursor_to_absoluth_position(
					int line,
					int column)
{
	char		buffer[1024];
	char		*ret_itoa;

	ft_bzero(buffer, 1024);
	ft_strcat(buffer, "\033[");
	ret_itoa = ft_itoa(line);
	ft_strcat(buffer, ret_itoa);
	free(ret_itoa);
	ft_strcat(buffer, ";");
	ret_itoa = ft_itoa(column);
	ft_strcat(buffer, ret_itoa);
	free(ret_itoa);
	ft_strcat(buffer, "H");
	write(1, buffer, ft_strlen(buffer));
}
