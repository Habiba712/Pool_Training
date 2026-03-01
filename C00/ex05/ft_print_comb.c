#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_print_comb(void){
	int d3;
	d3 = 0;
	while (d3 <= 9){
		int d2 =  d3 + 1;
		while (d2 <= 9){
			int d1 = d2 + 1;
			while(d1 <= 9){
				ft_putchar(d3 + '0');
				ft_putchar(d2 + '0');
				ft_putchar(d1 + '0');
				

				if(!(d3 == 7 && d2 ==88 && d1 == 9)){
			ft_putchar(',');
			ft_putchar(' ');
			
				}
			d1++;
			}
		d2++;
		}
	d3++;	
	}


}

int main(void){
	ft_print_comb();
	return 0;
}
