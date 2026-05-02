#include <unistd.h>
#include <fcntl.h>

void ft_hex(unsigned char c){
	char *base = "0123456789abcdef";
	
	write(1, &base[c / 16], 1);
	write(1, &base[c % 16], 1);

}

int check_printable(char c){
	
	if(c >= 32 && c <= 126){
		return 1;
	}
	return 0;

}

void ft_hexdump(char *file){

	int bytes;
	int fd;
	char buffer[16];
	int i;

	fd = open(file, O_RDONLY);
	
	while((bytes = read(fd, buffer, 16)) > 0){
		i = 0;
		while(i < bytes){
			ft_hex(buffer[i]);
			write(1, " ", 1);
			i++;
		}		
		i = 0;
		write(1, "|", 1);
		while(i < bytes){
			if(check_printable(buffer[i])){
             			write(1, &buffer[i], 1);
			}
			else{
				write(1,".",1);
			}
			i++;
		}
		write(1, "|", 1);
		write(1, "\n", 1);
	
	}
	close(fd);



}
