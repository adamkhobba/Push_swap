
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

// src
t_list				*create_stack_a(int ac, char **av);
t_list				*push_stack(t_list **lst, int n);
t_list				*push_stack(t_list **lst, int n);
// move
int					ft_push(t_list **from, t_list **to);
t_list				*ft_rotate(t_list **list);
t_list				*ft_reverse_rotate(t_list **list);
int					ft_swap(t_list **lst);
// utils
t_list				*ft_create_node(int nbr);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *ne);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *ne);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
int					ft_strlen(const char *str);
int					ft_atoi(const char *nptr);
#endif
