# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 15:37:22 by akhobba           #+#    #+#              #
#    Updated: 2024/04/20 15:30:06 by akhobba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = src/create_stack.c src/push_swap.c src/moves.c src/sort_five.c src/parsing.c \
		src/split_input.c src/ft_split.c src/not_sorted.c\
		utils/small_ft.c utils/ft_lstadd_front_bonus.c  utils/ft_atoi.c\
		utils/ft_lstnew_bonus.c utils/ft_lstdelone_bonus.c\
		utils/ft_lstsize_bonus.c utils/ft_strdup.c utils/ft_lstclear_bonus.c utils/ft_putstr.c\
		src/free_file.c

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