#include <unistd.h>
#include <fcntl.h>

void ft_tail(int n, char *file){
	
	int fd = open(file, O_RDONLY);
	char buffer[30000];
	int bytes;
	int line_count = 0;
	int i = 0;
	int current;
	
	if(fd < 0) return;

	bytes = read(fd, buffer, 30000);
	i = 0;

	while(i < bytes){
		if(buffer[i] == '\n')
			line_count++;
		i++;
	}

	if(n > line_count)
		n = line_count;

	current = 0;
	i = 0;

	
	while(i < bytes){
		if(current >= (line_count - n))
			write(1, &buffer[i], 1);

		if(buffer[i] == '\n')
			current++;

		i++;
	}
	close(fd);


}

