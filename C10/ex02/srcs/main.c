#include <unistd.h>
#include "ft_tail.h"


int main(int ac, char **av){
	int i = 1;
	int n = 5;

	if(ac < 2) return 0;

	while(i < ac){
		ft_tail(n, av[i]);
		i++;
	}

	return 0;

}
