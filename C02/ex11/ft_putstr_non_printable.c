#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}
void convert_hex(unsigned int c){
	
	char *hex = "0123456789abcdef";

	ft_putchar('\\');
	ft_putchar(hex[c / 10]);
	ft_putchar(hex[c % 10]);


}
void ft_putstr_non_printable(char *str){
	
	int i = 0;


	while(str[i]){
		if(str[i] >= 32 && str[i] <= 122){
			ft_putchar(str[i]);		
		} 
		else{
		  convert_hex(str[i]);
		}

		i++;
	}
	
}

int main(void) {

	char str[] = "Hello 13\t37 fell\nas";
	ft_putstr_non_printable(str);

	return 0;
}
