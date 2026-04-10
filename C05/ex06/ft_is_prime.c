#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb){
	long n;
	n = nb;
	long index = 1;
	
	
	//let's assume that n is prime and try to prove that wrong !!
	
	if( n <= 1 ) return 0;
	index = 2;

	while(index <= n / index ){
		if((n % index) == 0 ) return 0;
	index++;
	}
	return 1;
	
}

int main(void){

	int number = 2147483647;
	int res = ft_is_prime(number);
	printf("%d", res);
	printf("%c", '\n');
	return 0;
}
