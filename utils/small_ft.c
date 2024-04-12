#include "../include/push_swap.h"

int ft_strlen(const char *str) {
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int ft_isdigit(int c) {
  if (c >= 48 && c <= 57)
    return (1);
  else
    return (0);
}

int ft_strncmp(const char *s1, const char *s2, size_t n) {
  size_t i;

  i = 0;
  while (i < n && (s1[i] != '\0' || s2[i] != '\0')) {
    if (s1[i] != s2[i])
      return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    i++;
  }
  return (0);
}
