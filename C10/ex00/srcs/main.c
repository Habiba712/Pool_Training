#include "ft_display_file.h"
#include <unistd.h>

int main(int argc, char **argv){
	
	if(argc < 2){
		ft_puterr("File name missing \n");
	}
	else if(argc > 2){
		ft_puterr("Too many arguments");
	}
	else{
		display_file(argv[1]);
	}

	return 0 ;

}
