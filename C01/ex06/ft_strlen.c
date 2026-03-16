#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
	
}

void ft_putnbr(int n){

	if(n < 0){
		ft_putchar('-');
		int nb = -n;
		ft_putnbr(nb);
	}
	if (n > 9){
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
	
}
void ft_strlen(char *str){
	int sum = 0;
	int i = 0;
	
	while(str[i] != '\0'){
		sum++;
		i++;
	}
 	ft_putnbr(sum);

}


int main(void){

	char *str = "Habiba";
	ft_strlen(str);

	return 0;
}
