#a Makefile contains Rules; target: dependencies
#			            command
#target: what we need to create (ex. libft.a)
#Dependencies: What files are needed to make that
#Command: the exact shell command to run( must be preceded by a TAB)


SRC_DIR = src/
INC_DIR = includes/

PRE_SRCS =ft_putcahr.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

FLAGS = -Wall -Wextra -Werror

SRC = $( $(SRC_DIR), $(PRE_SRCS))
OBJS = $(SRC:.c=.o)

CC = gcc

NAME = libft.a

all: $(NAME)

AR: ar crs
RM: rm -rf

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: fclean all
	
.PHONY: all clean fclean re 
