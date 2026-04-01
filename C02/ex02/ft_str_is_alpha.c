#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

int ft_str_is_alpha(char *str){
	int i = 0;
	
	while(str[i] != '\0'){
		if(!((str[i] <= 65 && str[i] >= 90) || (str[i] <= 90 && str[i] >= 122))){
			return 0;
		}
	i++;
	}
	return 1;

}

int main(void){
	char *str = "    ";
	int res = ft_str_is_alpha(str);
	ft_putchar(res + '0');
	return 0;
}
