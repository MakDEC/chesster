int				is_white_case(
					int horizontal_index,
					int vertical_index)
{
	return (((horizontal_index + vertical_index) % 2) == 0 ? 1 : 0);
}
