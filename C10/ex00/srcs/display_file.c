#include <unistd.h>
#include <fcntl.h>
#include "ft_display_file.h"

void display_file(char *file){

	int fd;
	char buffer[1024];
	int  bytes;
	char *err = "This file doesn't exist .\n";

	fd = open(file, O_RDONLY);
	if(fd < 0){
		ft_puterr(err);
	}

	bytes = read(fd, buffer, 1024);

	while(bytes > 0){
		write(1, buffer, bytes);
		// take up to 1024 bytes from the file and put them into the buffer
		bytes = read(fd, buffer, 1024);
		//bytes actually read
		//0 -> end of file
		//-1 -> error
	
	}
	close(fd);

	return;

}
