

NAME=ft_display_file
SRCS=srcs/display_file.c srcs/ft_puterr.c srcs/main.c
OBJS=$(SRCS:.c=.o)
INCL=-I includes

CC=gcc
CFLAGS=-Wall -Werror -Wextra -I includes

all: $(NAME)

$(NAME): $(OBJS)
	#to create ft_display_file : we need the .o files
	$(CC) $(INCL) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
