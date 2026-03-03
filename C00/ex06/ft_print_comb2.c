#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_print_comb2(void){

	int d4;
	d4 = 0;

	while(d4 <= 9){
		int d3 = 0;	
		while (d3 <= 9){
			int d2 = 0;	
			while (d2 <= 9){
				int d1 = 0;
				while( d1 <= 9){
			 
				ft_putchar(d4 + '0');
				ft_putchar(d3 + '0');
				ft_putchar(d2 + '0');
				ft_putchar(d1 + '0');
				
				if (!(d4 == 9 && d3 == 9 && d2 == 9 && d1 == 9)){
					ft_putchar(',');
					ft_putchar(' ');
				}
				d1++;}
			d2++;}
		d3++;}
	d4++;}



}

int main(void){
	ft_print_comb2();
	return 0;
}
