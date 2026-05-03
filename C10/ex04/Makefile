NAME = ft_last
SRCS = srcs/ft_last.c srcs/main.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I includes
INC = -I includes

all = $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INC) $(OBJS) -o $(NAME)

%o.: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


