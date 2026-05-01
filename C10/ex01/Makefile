
NAME = ft_cat
SRCS = srcs/ft_cat.c srcs/main.c srcs/ft_stdin_to_stdout.c
INCLUDES = -I includes
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: rm -f $(OBJS) 

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
