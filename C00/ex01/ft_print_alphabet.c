#include <unistd.h>

void ft_putchar(char c){
	        write(1, &c, 1);
}

void ft_print_alphabet(void){
	int x;
	x = 97;

	
	while (x <= 122){
		ft_putchar(x); 
		x++;
	}
	write(1, "\n", 1);
}
void ft_print_alphabet1(void){

	char x;
	x = 'a';

	while(x <= 'z'){
		ft_putchar(x); 
		x++;
	}

	write(1, "\n", 1);
}
int main (void){
	ft_print_alphabet();
	ft_print_alphabet1();
	return 0;
}
