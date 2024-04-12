# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhobba <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 15:37:22 by akhobba           #+#    #+#              #
#    Updated: 2024/04/05 15:37:25 by akhobba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

# CFLAGS = -Wall -Wextra -Werror

<<<<<<< HEAD
SRC = src/create_stack.c src/push_swap.c src/parsing.c src/ft_split.c\
			src/moves.c\
			utils/ft_lstadd_front_bonus.c utils/small_ft.c utils/ft_atoi.c\
=======
SRC = src/create_stack.c src/push_swap.c src/moves.c src/sort_five.c\
			utils/ft_lstadd_front_bonus.c utils/ft_strlen.c utils/ft_atoi.c\
>>>>>>> 2eaccb469d0dd556c3ee7357cb3ddc56373a9b9c
			utils/ft_lstnew_bonus.c utils/ft_lstdelone_bonus.c
OBJ = ${SRC:.c=.o}

NAME = push_swap

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -fsanitize=address

clean :
	rm -r $(OBJ)

fclean : clean
	rm -r $(NAME)

re : fclean all
