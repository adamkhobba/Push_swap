CC = cc

# CFLAGS = -Wall -Wextra -Werror

SRC = src/create_stack.c src/push_swap.c\
			utils/ft_lstadd_front_bonus.c utils/ft_strlen.c utils/ft_atoi.c

OBJ = ${SRC:.c=.o}

NAME = push_swap

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean :
	rm -r $(OBJ)

fclean : clean
	rm -r $(NAME)

re : fclean all
