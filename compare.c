# include <unistd.h>


int ft_get_nbr(void){
	char buffer[11];
	int i = 0;
	int res = 0;
	int len;

	len = read(0, buffer, 10);

	while(i < len && (buffer[i] >= '0' && buffer[i] <= '9')){
	
	   res = res * 10 + (buffer[i] - 48);
	   i++;	
	}
	return res;

}

void ft_putstr(char *str){
	int i = 0;
	
	while(str[i]){
	  write(1, &str[i++], 1);
	}

}

void ft_putchar(char c){
	write(1, &c, 1);

}
void ft_putnbr(int n){

if(n > 9){
	ft_putnbr(n / 10);
	ft_putnbr(n % 10);
}
else{
	ft_putchar(n + 48);

}
}

int main(void){
	
	int x;
	int y;

	ft_putstr("What is x ? ");
	x= ft_get_nbr();

	ft_putstr("What is y ? ");
	y= ft_get_nbr();

	if(x > y){	
	ft_putstr("X is greater than Y \n");
	}
	else if (x < y){	
	ft_putstr("Y is greater than X \n");
	}
	else{	
	ft_putstr("X is equal to Y \n");
	}
	
	ft_putstr("X was equal to: ");
	ft_putnbr(x);
	ft_putstr("\n");

	ft_putstr("Y was equal to: ");
	ft_putnbr(y);
	ft_putstr("\n");

	return 0;

}
