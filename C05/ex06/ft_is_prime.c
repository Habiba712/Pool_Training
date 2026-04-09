#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb){
	long n;
	n = nb;
	long index = 1;
	int devided_one = 0;
	

	if( n == 0 || n == 1 ) return 0;
	while(index <= n ){
		if((n % index) == 0 && (index == 1)){
			devided_one = 1;
			index++;
		}
		if((n % index) == 0 && (index == n)){
			return 1;
		}
	index++;
	}
	return 0;
	
}

int main(void){

	int number = 1223;
	int res = ft_is_prime(number);
	printf("%d", res);
	printf("%c", '\n');
	return 0;
}
