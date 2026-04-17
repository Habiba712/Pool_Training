#include "ft_stock_str.h"
#include <unistd.h>


void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_putstr(char *str){
	int i = 0;
	while(str[i]){
		write(1, &str[i++], 1);
	}
}
void ft_putnbr(int nbr){
	
	if (nbr < 0){
	    ft_putchar('-');
	    nbr = -nbr;
	}

	if (nbr > 9){
		ft_putnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
}


void ft_show_tab(struct s_stock_par *par){
	
	int i = 0;

	while(par[i].str != 0){
		
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].str);
		write(1,"\n",1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}

}

int main(void){
	struct s_stock_par arr[3];

	arr[0].size = 2;
	arr[0].str  = "hi";
	arr[0].copy = "hi";

	arr[1].size = 2;
	arr[1].str  = "no";
	arr[1].copy = "no";

	arr[2].str  = 0;
	
	ft_show_tab(arr);
	return 0;
}
