
gcc -Wall -Wextra -Werror -c ft_swap.c ft_putchar.c ft_strlen.c ft_strcmp.c ft_putstr.c

#ar : archive, r: replace exising files, c:create the library of it doesnt exist
ar rc libft.a ft_swap.o ft_putchar.o ft_strlen.o ft_strcmp.o ft_putstr.o

#Index the library, making it faster for the compilter to find th efunctions inside it*
ranlib libft.a 
