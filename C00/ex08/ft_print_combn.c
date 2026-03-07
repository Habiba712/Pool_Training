#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}



void solve(int n, int index, int start,int *tab){

	int i;
	if(index == n){
		i =0;
		while(i < n){
			ft_putchar(tab[i++] + '0');
				}
			if(tab[0] < (10 - n)){
				ft_putchar(',');
				ft_putchar(' ');
			}
		return;
		
		
	}

	i= start;
	while (i <= 9){
		tab[index] = i;
		solve(n, index + 1, i + 1, tab);
	i++;
		
	}
}

void ft_print_combn(int n){

	int tab[10];
	
	if (n > 0 && n < 10){
		solve(n, 0, 0, tab);
	}

}


int main(void){
	
	ft_print_combn(4);	
	return 0;
}
