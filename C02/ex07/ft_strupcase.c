#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

char *ft_strupcase(char *str){

	int i = 0;
	
	while (str[i] != '\0'){
		if(str[i] >= 97 && str[i] <= 122){
			str[i] = str[i] - 32;
		}		
	i++;
	}
	return str;
}


int main(void){
	char str[] = "habiba taliby";
	char *res = ft_strupcase(str);
       	int u = 0;
	while (res[u] != '\0'){
		ft_putchar(res[u]);
		u++;
	}	
	return 0;
}
