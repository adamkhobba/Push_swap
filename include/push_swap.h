
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
<<<<<<< HEAD
#define INT_MAX 2147483647
#define INT_MIN -2147483648
=======
>>>>>>> 2eaccb469d0dd556c3ee7357cb3ddc56373a9b9c

typedef struct s_list {
  int data;
  struct s_list *next;
} t_list;

// src
t_list *create_stack_a(int ac, char **av);
t_list *push_stack(t_list **lst, int n);
<<<<<<< HEAD
int ft_all_checks(char **s, int ac);
t_list *push_stack(t_list **lst, int n);
=======
t_list *push_stack(t_list **lst, int n);
int ft_search_min(t_list **stack);
>>>>>>> 2eaccb469d0dd556c3ee7357cb3ddc56373a9b9c
// move
int ft_push(t_list **from, t_list **to);
t_list *ft_rotate(t_list **list);
t_list *ft_reverse_rotate(t_list **list);
int ft_swap(t_list **lst);
// utils
<<<<<<< HEAD
int ft_isdigit(int c);
t_list *ft_create_node(int nbr);
int ft_strncmp(const char *s1, const char *s2, size_t n);
=======
t_list *ft_create_node(int nbr);
>>>>>>> 2eaccb469d0dd556c3ee7357cb3ddc56373a9b9c
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *ne);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *ne);
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int ft_strlen(const char *str);
<<<<<<< HEAD
long ft_atoi(const char *nptr);
=======
int ft_atoi(const char *nptr);
>>>>>>> 2eaccb469d0dd556c3ee7357cb3ddc56373a9b9c
#endif
