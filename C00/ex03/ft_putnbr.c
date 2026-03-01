#include <unistd.h>

void ft_putchar(int c){
	        write(1, &c, 1);
}

void ft_print_numbers(int n){

	        if(n > 9){
			                ft_print_numbers(n / 10);
					        }
		ft_putchar((n % 10) + 48);
}

int main(void){
	        ft_print_numbers(123);
		        return 0;
}
