# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 15:37:22 by akhobba           #+#    #+#              #
#    Updated: 2024/05/02 09:21:39 by akhobba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = src/create_stack.c src/push_swap.c src/moves.c src/sort_five.c src/parsing.c \
		src/split_input.c src/ft_split.c src/not_sorted.c\
		utils/small_ft.c utils/ft_lstadd_front_bonus.c  utils/ft_atoi.c\
		utils/ft_lstnew_bonus.c utils/ft_lstdelone_bonus.c\
		utils/ft_lstsize_bonus.c utils/ft_strdup.c utils/ft_lstclear_bonus.c utils/ft_putstr.c\
		src/free_file.c src/searching.c src/searching2.c src/moves2.c\
		src/turk_algo.c src/turk_push_b.c src/turk_back.c src/turk_algo_plus.c

SRC_BONUS = src/create_stack.c src/moves.c src/sort_five.c src/parsing.c \
		src/split_input.c src/ft_split.c src/not_sorted.c\
		utils/small_ft.c utils/ft_lstadd_front_bonus.c  utils/ft_atoi.c\
		utils/ft_lstnew_bonus.c utils/ft_lstdelone_bonus.c\
		utils/ft_lstsize_bonus.c utils/ft_strdup.c utils/ft_lstclear_bonus.c utils/ft_putstr.c\
		src/free_file.c src/searching.c src/searching2.c src/moves2.c\
		src/turk_algo.c src/turk_push_b.c src/turk_back.c src/turk_algo_plus.c\
		bonus/src_bonus/action.c bonus/src_bonus/checker.c 	bonus/src_bonus/is_sorted.c\
		bonus/utils_bonus/get_next_line.c  bonus/src_bonus/parsing_bonus.c

CLEAN = bonus/src_bonus/action.c bonus/src_bonus/checker.c 	bonus/src_bonus/is_sorted.c\
		bonus/utils_bonus/get_next_line.c bonus/src_bonus/parsing_bonus.c

OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

NAME = push_swap

NAME_BONUS = checker

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

bonus : $(NAME_BONUS)

$(NAME_BONUS) : $(OBJ_BONUS)
	$(CC) $(OBJ_BONUS) -o $(NAME_BONUS)

clean :
	rm -rf $(OBJ) ${CLEAN:.c=.o} 

fclean : clean
	rm -rf $(NAME)
	rm -rf $(NAME_BONUS)

re : fclean all