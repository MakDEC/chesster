#ifndef CHESS_H
#define CHESS_H

#include <termios.h>

#define white_pion 1
#define white_cav 2
#define white_fou 3
#define white_tower 4
#define white_queen 5
#define white_king 6
#define black_pion 7
#define black_cav 8
#define black_fou 9
#define black_tower 10
#define black_queen 11
#define black_king 12

typedef struct			s_piece
{
	char				position[2];
	char				in_range[8][2];
	char				knight_range[8];
	char				cover_his_king;
}						t_piece;

/*
**	Position[0] is x (vertical index) when position[1] is y (horizointal index)
*/

typedef struct			s_team
{
	t_piece				*team[16];
}						t_team;

typedef struct			s_game_data
{
	char				game_board[8][8];

	t_team				*white_team;

	t_team				*black_team;

}						t_game_data;

t_game_data				*create_new_game_board(void);
void					draw_board(t_game_data *game_data);
void					draw_board_upper_letters(void);
void					draw_board_upper_line(void);
void					draw_board_numbers(void);
void					draw_all_pieces(t_game_data *game_data);

void					clear_screen(void);
int						is_white_case(int horizontal_index, int vertical_index);
void					move_cursor_on_top_left(void);
void					move_cursor_to_absoluth_position(int line, int column);
void					prep_term();
void					restore_write_default_settings(void);
void					set_window_size(void);
void					set_write_white_back(void);
void					set_write_to_blue_and_bold(void);
void					set_write_to_red_and_bold(void);
void					set_write_to_white_color(void);

void					load_range_informations(t_game_data *game_data,
								t_piece *piece);
void					load_knight_range_informations(t_game_data *game_data,
								t_piece *piece);

#endif
