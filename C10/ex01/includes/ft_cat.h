#ifndef FT_CAT_H
#define FT_CAT_H

#include <fcntl.h>
#include <libgen.h>
#include <sys/errno.h>
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_putstr(char *str);
int ft_strcmp(char *s1, char *s2);
int ft_strlen(char *str);
void ft_cat_file(char *file);
void stdin_to_stdout(void);

#endif
