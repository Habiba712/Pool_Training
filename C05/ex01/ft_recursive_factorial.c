#include <unistd.h>
#include <stdio.h>


int ft_recursive_factorial(int nb){
	
	int res;

	if(nb == 0 || nb == 1) return 1;
	if(nb == 2) return 2;
	if(nb < 0) return 0;
	if(nb > 2){
		res = nb * ft_recursive_factorial(nb - 1);	
	}
	return res;
}

int main(void){
	int nb;
	int res;

	nb = 4;
	res = ft_recursive_factorial(nb);
	printf("%d", res);
	printf("%c", '\n');	
	return 0;
}
