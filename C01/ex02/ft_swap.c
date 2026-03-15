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
void ft_swap(int *a, int *b){
	
	int c;
	c = *a;
	*a = *b;
	*b = c;

}


int main(void){

	int n;
	int m;

	n = 30;
	m = 40;

	ft_swap(&n, &m);
	ft_putchar('n');
	ft_putnbr(n);
	ft_putchar('\n');
	ft_putchar('m');
	ft_putnbr(m);
	ft_putchar('\n');
	return 0;
}
