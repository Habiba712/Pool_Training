#include <unistd.h>


void ft_putchar(char c){
        write(1, &c, 1);

	}
void	ft_print_reverse_alphabet(void){

	char x;
	x = 122;

	while (x >= 96){
		ft_putchar(x);
		x--;
	}

}
int main(void){
	ft_print_reverse_alphabet();
	return 0;
}

