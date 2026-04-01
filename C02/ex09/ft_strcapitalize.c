#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

int ft_alphanum(char c){
    return  ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57));
}

char *ft_strcapitalize(char *str){

	int i = 0;

	while(str[i] != '\0'){
		if((str[i] >= 97 && str[i] <= 122 ) && (i == 0 || !ft_alphanum(str[i - 1]))){
			str[i] = str[i] - 32;
			}
		else if((str[i] >= 65 && str[i] <= 90) && (i > 0 && ft_alphanum(str[i - 1]))){
			str[i] = str[i] + 32;
		}
	
		
		i++;
	}
	return str;
}
int main(void){
	char str[] = "hello there. it's 17C today. so-so-hot";
	char *res = ft_strcapitalize(str);

	int j = 0;
	while (res[j] != '\0'){
		ft_putchar(res[j]);
		j++;		
	}
	return 0;
}
