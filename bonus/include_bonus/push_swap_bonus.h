/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <akhobba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:48:12 by akhobba           #+#    #+#             */
/*   Updated: 2024/05/02 09:51:01 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../utils_bonus/get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

// free ft
void				ft_free(char **s, int len, int option);

// src ft

t_list				*create_stack_a(char **av);
t_list				*push_stack(t_list **lst, int n);
int					ft_search_min(t_list *stack);
char				**ft_split(char *str, char c);
char				**split_input(int ac, char **av);

// sort five ft
void				ft_push_the_lowest(t_list **stack_a, t_list **stack_b);
void				ft_sort_five(t_list **stack_a, t_list **stack_b);
void				ft_sort_three(t_list **stack);

// parsing ft
int					ft_not_soted(char **s);
int					ft_all_checks(char **s);
int					max(int a, int b);
int					ft_check_num(char **s);
int					ft_bigger_int(char **s);
int					ft_dup_num(char **s);
int					ft_check_move(char *move);
int					ft_check_av(int ac, char **av);

// move ft
void				ft_swap_two(t_list **stack_a, t_list **stack_b);
void				ft_rotate_two(t_list **stack_a, t_list **stack_b);
void				ft_reverse_rotate_two(t_list **stack_a, t_list **stack_b);
int					ft_push(t_list **from, t_list **to, char *s);
void				ft_rotate(t_list **list, char c);
void				ft_reverse_rotate(t_list **list, char c);
int					ft_swap(t_list **lst, char c);

// searching ft
int					ft_search_val_max(t_list *stack);
int					ft_search_closet_smaller(t_list *stack, int needer);
int					ft_search_min_max(t_list *stack, char c);
int					ft_search_target(t_list *stack, int needer, char c);
int					ft_search_max(t_list *stack);
int					ft_neg1_case(t_list *stack);

// utils ft
void				ft_putstr(char *s, int fd);
int					ft_isdigit(int c);
char				**ft_strdup_pro(char **s);
int					ft_count_strs(char **s);
long				ft_atoi(const char *nptr);
int					ft_strncmp(const char *s1, const char *s2, ssize_t n);

// list ft
t_list				*ft_create_node(int nbr);
t_list				*ft_create_node(int nbr);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *ne);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *ne);
void				ft_lstclear(t_list **lst);
void				ft_lstdelone(t_list *lst);
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
// src bonus ft
void				ft_action(t_list **stack_a, t_list **stack_b, char *move);
void				ft_multi_action(t_list **stack_a, t_list **stack_b,
						char **s);
int					ft_is_ok_ko(t_list *stack_a, char **s);
int					ft_check_num_num(t_list *stack_a, char **s);
int					ft_is_sorted(t_list *stack_a);
int					ft_parsing_bonus(char **s);
#endif