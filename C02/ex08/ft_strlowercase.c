#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

char *ft_strlowercase(char *str){
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] >= 65 && str[i] <= 90){
			str[i] = str[i] + 32;
		}
	i++;
	}
	return str;
}
int main(void){
	char str[]= "HABIBA TALIBY";
	char *res = ft_strlowercase(str);

	int j = 0;
	while (res[j] != '\0'){
		ft_putchar(res[j]);
		j++;
	}
	return 0;
}
