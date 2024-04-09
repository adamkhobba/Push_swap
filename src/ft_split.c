#include "../include/push_swap.h"
#include <stdlib.h>
#include <string.h>

int ft_counte_word(char *s, char c) {

  int counter;
  int i;

  i = 0;
  counter = 0;
  while (s[i] == c)
    i++;
  while (s[i]) {
    if (s[i] != c)
      counter++;
    while (s[i] != c)
      i++;
    i++;
  }
  return (counter);
}

static char *ft_fill(char const *s, unsigned int start, size_t len) {
  char *ptr;
  size_t j;

  j = 0;
  ptr = malloc((len + 1) * sizeof(char));
  if (!ptr)
    return (NULL);
  while (s[start] && j < len) {
    ptr[j++] = s[start++];
  }
  ptr[j] = '\0';
  return (ptr);
}

char *ft_substr(char const *s, unsigned int start, size_t len) {
  char *ptr;

  if (!s)
    return (NULL);
  if (len > ft_strlen(s) - start)
    len = ft_strlen(s) - start;
  if (ft_strlen(s) <= start) {
    ptr = malloc(1 * sizeof(char));
    if (!ptr)
      return (NULL);
    ptr[0] = '\0';
    return (ptr);
  }
  return (ft_fill(s, start, len));
}

char **ft_anything(char *s, char c, int num_word) {
  char **split_s;
  int i;
  int size;
  int x;

  x = 0;
  i = 0;
  size = 0;
  split_s = malloc(sizeof(char *) * size);
  while (x < num_word) {
    while (s[i] && s[i] == c)
      i++;
    while (s[i] && s[i] != c) {
      size++;
      i++;
    }
    split_s[x] = malloc(sizeof(char) * size);
    split_s[x] = ft_substr(s, i - size, size);
    size = 0;
    x++;
  }
  split_s[x] = NULL;
  return split_s;
}

char **ft_split(char *str, char c) {
  char **s;
  int counter;

  counter = ft_counte_word(str, c);
  s = ft_anything(str, c, counter);
  return (s);
}
