#include <unistd.h>


void ft_putchar(char c){
        write(1, &c, 1);
}

void ft_putnbr(int n){

        if(n < 0){		
	        ft_putchar('-');
	        int nb = -n;
	        ft_putnbr(nb);
	}
	if (n > 9){
	        ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}


void ft_swap(int *a, int *b){
		
	int c;
	c = *a;
	*a = *b;
	*b = c;

}



