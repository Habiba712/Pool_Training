#include <unistd.h>
#include <fcntl.h>



void ft_tail(int n, char *file){

	int fd;
	int bytes;
	int current = 0;
	int i = 0;
	char buffer[30000];
	int line_count = 0;
	
	fd = open(file, O_RDONLY);
	if(fd < 0) return;
	
	bytes = read(fd, buffer, 30000);
	close(fd);

	while(i < bytes){
		if(buffer[i] == '\n'){
			line_count++;
		}
		i++;
	}

	if(n > line_count) n = line_count;

	i = 0;

	while(i < bytes){
		if(current >= (line_count - n)){
			write(1, &buffer[i], 1);
		}
		if(buffer[i] == '\n'){
			current++;
		}
	i++;
	}
	

}
