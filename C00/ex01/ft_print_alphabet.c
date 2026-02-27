#include <unistd.h>

void ft_print_alphabet(void){
	int x;
	x = 97;

	
	while (x <= 122){
		write(1, &x, 1); 
		x++;
	}
	write(1, "\n", 1);
}
void ft_print_alphabet1(void){

	char x;
	x = 'a';

	while(x <= 'z'){
		write(1, &x, 1);
		x++;
	}

	write(1, "\n", 1);
}
int main (void){
	ft_print_alphabet();
	ft_print_alphabet1();
	return 0;
}
