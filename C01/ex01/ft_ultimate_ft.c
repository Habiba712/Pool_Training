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
void ft_ultimate_ft(int *********nbr){
	
	*********nbr = 133338;
	int number;
	number = *********nbr;
	ft_putnbr(number);


}

int main (void){
	int n;
	n = 0;
	int *p1;
	int **p2;
	int ***p3;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;
	int *********p9;

	p1 = &n;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	
	ft_ultimate_ft(p9);
	return 0;
}
