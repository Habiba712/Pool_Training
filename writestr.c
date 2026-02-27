#include <unistd.h>

void ft_showstr(char *str){
	int i = 0;
	while (str[i] != '\0'){
		write(1, &str[i], 1);
		i++;
	}
}

int main(void){

	int x = 10;
	int y = 20;

	if(x < y){
	ft_showstr("X is not greater than Y");
	}
	ft_showstr("\n");

	return 0;

}
