#include <unistd.h>
#include "ft_display_file.h"

void ft_puterr(char *str){
	int i = 0;
	while(str[i]){
		write(2, &str[i++], 1);
	}
}
