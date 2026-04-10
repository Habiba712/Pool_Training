#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb){
	long n = nb;
	long index = 2;

	while( index <= (n / index)){
		if( (n % index) == 0) return 0;
	index++;
	}
	return 1;
}
int ft_find_next_prime(int nb){

	long n = nb;

	while(ft_is_prime(n) == 0){
		n++;	
	}

	return n;	
}


int main(void){
	int number = 910;
	int res = ft_find_next_prime(number);
	printf("%d", res);
	printf("%c", '\n');
	return 0;
}
