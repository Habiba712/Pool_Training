#include <unistd.h>
#include <stdio.h>


int ft_sqrt(int nb){
	long i;
	long n;
	n = nb;

	if( n < 0) n = -n;
	if( n == 1) return 1;
	if( n == 0) return 0;

	i = 2;
	
	if(i >= 2){
		while( i * i <= n){
			if ((i * i) == n){
				return i;
			}
		i++;
		}
	}
	return 0;
	
}
int main(void){

	int number = -998001;
	int res = ft_sqrt(number);
	
	printf("%d", res);
	printf("%c", '\n');
	return 0;
}
