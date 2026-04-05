#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

int check_base(char *base){
	
	int i = 0;
	int j;

	if(!base[0] || !base[1]){
		return 0;
	}	
	while(base[i]){
		if(base[i] == '+' || base[i] == '-'){
			return 0;
		}
		j = i + 1;
		while(base[j]){
			if(base[i] == base[j]){
			return 0;
			}
		j++;
		}
		i++;
	}

	return i;
}
void ft_putnbr_base(int nbr, char *base){
	//check the base fist
	int nbase = check_base(base);
	if(nbase >= 2 && nbase <= 16){
		if(nbr < 0){
		   ft_putchar('-');
		   nbr = -nbr;
		}
		if(nbr >= nbase){
		   ft_putnbr_base((nbr / nbase), base);
		}
	
		ft_putchar(base[nbr % nbase]);
	}
}

int main(void){
	char *base = "01";
	int number = 1337;

	ft_putnbr_base(number, base);
	return 0;
}
