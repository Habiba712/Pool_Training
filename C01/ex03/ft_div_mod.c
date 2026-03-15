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

void ft_div_mod(int a, int b, int *div, int *mod){

	*div = a / b;
	*mod = a % b;
}

int main(void){
	int a;
	int b;
	int res_div;
	int res_mod;
	
	a = 932490;
	b = 2784;

	ft_div_mod(a, b, &res_div, &res_mod);
	ft_putchar('A');
	ft_putnbr(res_div);
	ft_putchar('\n');
	ft_putchar('B');
	ft_putnbr(res_mod);
	ft_putchar('\n');
	
	return 0;

}
