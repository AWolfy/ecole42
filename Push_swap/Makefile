SRC = $(shell find -name "*.c")

CC	=	clang
CFLAGS = -Wall -Wextra -Werror -I.

OBJ =    $(SRC:.c=.o)

NAME = push_swap.a

$(NAME) : $(OBJ)
		ar rcv $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

bonus : $(OBJ)
		ar rcv $@ $^
clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
