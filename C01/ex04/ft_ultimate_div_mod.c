#include <unistd.h>
void ft_putchar(char c){
     write(1, &c, 1);
}

void ft_putnbr(int n){

       if(n < 0)
        {
          ft_putchar('-');
          int nb = -n;
          ft_putnbr(nb);
        }
       if (n > 9){
          ft_putnbr(n / 10);
	        }
	  ft_putchar((n % 10) + '0');
}


void ft_ultimate_div_mod(int *a, int *b){


	int res_div = *a / *b;
	int res_mod = *a % *b;
	*a = res_div;
	*b = res_mod;	

}

int main(void){
	int a;
	int b;

	a = 3874;
	b = 329;
	if (b != 0){
	
	ft_ultimate_div_mod(&a, &b);
	ft_putchar('A');
	ft_putnbr(a);
	ft_putchar('\n');

	ft_putchar('B');
	ft_putnbr(b);
	ft_putchar('\n');
	}
	return 0;
}
