#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);

}

void ft_putnbr(int nb){
	if ( nb == -2147483647){
		ft_putchar('-');
		ft_putchar(2 + '0');
		nb = -nb;
	}
	if (nb < 0){
		ft_putchar('-');
		nb = -nb;
	}
	if(nb > 9){
	ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');

}

int main(void){
	ft_putnbr(-2948);
	return 0;
}
