NAME= ft_hexdump

SRCS= srcs/main.c srcs/ft_hexdump.c
INCLUDES= -I includes
OBJS= $(SRCS:.c=.o)

CC= gcc
CFLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
