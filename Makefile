
NAME = chess

FILE =	srcs/chess.c\
		srcs/create_new_game_board.c\
		srcs/clear_screen.c\
		srcs/draw_board.c\
		srcs/move_cursor_on_top_left.c\
		srcs/set_window_size.c

FLAGS = -Wall -Werror -Wextra			\
	-g -fsanitize=address			\
	-fno-omit-frame-pointer			\
	-fsanitize-address-use-after-scope	\
	-fsanitize=leak

LIBFT = libft/libft.a

CC = gcc

OBJS = $(patsubst srcs/%.c,objs/%.o,$(FILE))


objs/%.o: srcs/%.c
	@$(CC) -c $< $(FLAGS) -o $@ -I includes
	@printf '\033[34;01m%s\n\033[0m' 'Transformorming $< into object'

all: libft_comp create_directories $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) -o $(NAME) $(FLAGS) $(OBJS) $(LIBFT)
	@printf '\033[34;01m\033[1m%s\n\033[0m' 'Objects successfull linked : $(NAME) available'

create_directories :
	@mkdir -p objs


libft_comp :
	@printf '\033[33;01m'
	@make -C libft/ -w
	@printf '\033[0m'

clean:
	@make clean -C libft/
	@rm -rf objs
	@printf '\033[31;01m%s\n\033[0m' 'Deletion of objects (binary files)'

fclean: clean
	@rm -rf $(NAME).dSYM
	@rm -rf libft/libft.a
	@printf '\033[31;01m%s\n\033[0m' 'Deletion of libft.a'
	@rm -rf $(NAME)
	@printf '\033[31;01m%s\n\033[0m' 'Deletion of $(NAME)'

re: fclean all

.PHONY: all clean fclean re
