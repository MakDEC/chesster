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

typedef struct			s_game_data
{
	char				game_board[8][8];
}						t_game_data;

t_game_data				*create_new_game_board(void);
void					draw_board(t_game_data *game_data);

void					clear_screen(void);
void					move_cursor_on_top_left(void);
void					set_window_size(void);
