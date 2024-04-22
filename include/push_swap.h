
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648

typedef struct s_list {
  int data;
  struct s_list *next;
} t_list;

// free ft
void ft_free(char **s, int len, int option);

// src ft
t_list *create_stack_a(char **av);
t_list *push_stack(t_list **lst, int n);
int ft_search_min(t_list *stack);
char **ft_split(char *str, char c);
char **split_input(int ac, char **av);

// sort five ft
void ft_push_the_lowest(t_list **stack_a, t_list **stack_b);
void ft_sort_five(t_list **stack_a, t_list **stack_b);

// parsing ft
int ft_not_soted(char **s);
int ft_all_checks(char **s);

// move ft
int ft_push(t_list **from, t_list **to, char *s);
t_list *ft_rotate(t_list **list, char c);
t_list **ft_reverse_rotate(t_list **list, char c);
int ft_swap(t_list **lst, char c);
// searching ft

int ft_search_closet_smaller(t_list *stack, int needer);
int ft_search_target(t_list *stack, int needer, char c);
int ft_search_max(t_list *stack);
int ft_neg1_case(t_list *stack);
// utils ft
void ft_putstr(char *s, int fd);
int ft_isdigit(int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char **ft_strdup_pro(char **s);
char *ft_strdup(const char *s);
int ft_count_strs(char **s);
int ft_strlen(const char *str);
long ft_atoi(const char *nptr);
char *ft_strjoin(char const *s1, char const *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strdup(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t size);

// list ft
t_list *ft_create_node(int nbr);
t_list *ft_create_node(int nbr);
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *ne);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *ne);
void ft_lstclear(t_list **lst);
void ft_lstdelone(t_list *lst);
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
