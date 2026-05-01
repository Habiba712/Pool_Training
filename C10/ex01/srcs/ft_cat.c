#include <string.h>
#include "../includes/ft_cat.h"


void ft_cat_file(char *file){

	int fd = open(file, O_RDONLY);
	char buffer[30000];
	int bytes;
	
	if(fd < 0) return;

	while((bytes = read(fd, buffer, 30000)) > 0){
		write(1, buffer, bytes);
	}

	close(fd);


}
