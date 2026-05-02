#include <unistd.h>
#include "ft_hexdump.h"


int main(int ac, char **av){
	
	if (ac < 2) return 0;

	int i = 1;

	while(i < ac){
		ft_hexdump(av[i]);	
		i++;
	}

	return 0;

}
