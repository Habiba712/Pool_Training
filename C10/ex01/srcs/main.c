#include "ft_cat.h"


int main(int ac, char **av){
	int i;

	i = 1;

	if(ac == 1){
		stdin_to_stdout();
	}
	else{
		while(i < ac){
			ft_cat_file(av[i]);
			i++;
		}
	
	}

	return 0;
}
