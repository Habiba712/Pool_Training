#include <utmp.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>


int ft_strlen(char *s){
	int i = 0;
	while(s[i]){
		i++;
	}
	return i;
}



void ft_last(void){
	
	int fd;
	int bytes;
	struct utmp entry;

	fd = open("/var/log/wtmp", O_RDONLY);

	if (fd < 0) return;
	
	while((bytes = read(fd, &entry, sizeof(entry))) > 0 ){

		
			write(1, entry.ut_user, ft_strlen(entry.ut_user));
			write(1, " ",1);
			write(1, entry.ut_line, ft_strlen(entry.ut_line));
			write(1, " ",1);
			write(1, entry.ut_host, ft_strlen(entry.ut_host));
		
		
		write(1, "\n",1);	
	
	
	}

	close(fd);
}
