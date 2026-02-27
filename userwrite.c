#include <unistd.h>

void ft_putnbr(char c){
	write(1, &c, 1);
}

int main(void){

	ft_putnbr('1');
	ft_putnbr('2');
	ft_putnbr('3');
	ft_putnbr('4');
	ft_putnbr('\n');

	
	ft_putnbr('A');
	ft_putnbr('A'+1);
	ft_putnbr('\n');

	char lettre = 'a';

	while(lettre <= 'z'){	

	ft_putnbr(lettre);
	lettre++;
	}
	ft_putnbr('\n');

	char lettre2 = 122;

	while(lettre2 >= 97){
	ft_putnbr(lettre2);
	lettre2--;
	}
	ft_putnbr('\n');


	return 0;

}

