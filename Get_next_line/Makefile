SRC =	get_next_line.c get_next_line_utils.c
SRC_BONUS = get_next_line_utils_bonus.c get_next_line_bonus.c

CC	=	cc
CFLAGS = -Wall -Wextra -Werror -D

OBJ =    $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

NAME = get_next_line.a

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(OBJ_BONUS)
	ar rcv $@ $^

bonus: $(OBJ) $(OBJ_BONUS)
	ar rcv $(NAME) $^

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
