

Objective: Building a Static Library
we took 5 basic functions and placed them in a package called libft.a, it's a binary archive (a)

libft_creator.sh: automation engineer. A shell script that run the compilation commands

Steps:
gcc -Wall -Wextra -Werror -c ft_putchar.c ... ---> translated the code into Object Code (.o files). "-c" means Make the binary pieces but DO NOT look for a main (cuz the functions don't have a main inside). "ar rc": archive tool, that checks if th elibrary already exists and replcae it, otherwise create a new one. Result: It glues the files to the libft.a . "ranlib libft.a" it creates a table of contents inside th elibrary so it s easier for the computer to find the specified funciton later when the library is called.
