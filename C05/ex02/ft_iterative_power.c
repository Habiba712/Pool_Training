#include <unistd.h>
#include <stdio.h>


int ft_iterative_power(int nb, int power){
	int res = 1;

	if (power == 0 ) return 1;
	if (power < 0 ) return 0;
	
	
	while(power > 0){
		res = res * nb;
	       power--;	
	}
	return res;
}
int main(void){

	int number = 3;
	int power = 3;
	int res = ft_iterative_power(number, power);
	printf("%d", res);
	printf("%c", '\n');

	return 0;
}


