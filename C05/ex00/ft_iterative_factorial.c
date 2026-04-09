#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}
void ft_putnbr(int n){
	
	if(n == -2147483648){
		ft_putchar('-');
		ft_putchar('2');
		n = -n;
	}
	if(n == 2147483647){
		ft_putchar('2');
		n = 147483647;
	}
	if(n > 9){
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');

}

int ft_iterative_factorial(int nb){
	
	int res;
	
	if(nb < 0 ) return 0;
	if(nb == 1 || nb == 0) return 1;
	if(nb == 2 ) return 2;
	res = 1;
	while ( nb > 0){
		res = res * nb;
		nb--;
	}
	return res;
}

int main(void){

	int nb;
	nb = 15;
	int res = ft_iterative_factorial(nb);
	ft_putnbr(res);
	ft_putchar('\n');
	return 0;
}
