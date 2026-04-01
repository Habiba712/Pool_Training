#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);	
}

int ft_str_is_printable(char *str){
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] < 32 || str[i] > 126){
			return 0;
		}	
	i++;
	}
	return 1;
}

int main(void){
	char *str = "Habiba";
	int res = ft_str_is_printable(str);
	ft_putchar(res + '0');
	return 0;
}
