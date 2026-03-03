#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
	}

void ft_print_comb3(void){
	int x;
	x = 0;

	while (x <= 98){
		int y = x + 1;
		while (y <= 99){
				ft_putchar((x / 10) + '0');
				ft_putchar((x % 10) + '0');

				ft_putchar(' ');

				ft_putchar((y /10) + '0');
				ft_putchar((y % 10) + '0');
			

			if(!(x== 98 && y == 99)){
				ft_putchar(',');
				ft_putchar(' ');
			}
		y++;
		}
	x++;}
}

int main (void){
	ft_print_comb3();
	return 0;
}
