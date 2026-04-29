#include <unistd.h>
#include <fcntl.h>
#include "ft_display_file.h"

void display_file(char *file){

	int fd;
	char buffer[1024];
	int  bytes;
	char *err = "Fd is less than 0";

	fd = open(file, O_RDONLY);
	if(fd < 0){
		ft_puterr(err);
	}

	bytes = read(fd, buffer, 1024);

	while(bytes > 0){
		write(1, buffer, bytes);
		bytes = read(fd, buffer, 1024);
	
	}
	close(fd);

	return;

}
