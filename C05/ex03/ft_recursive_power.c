#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power){
	
	if (power == 0 ) return 1;
	if (power < 0 ) return 0;

	return	(nb * ft_recursive_power(nb, (power - 1)));

}

int main(void){
	
	int number = 2;
	int power = 3;
	int res = ft_recursive_power(number, power);

	printf("%d", res);
	printf("%c", '\n');
	return 0;
}
