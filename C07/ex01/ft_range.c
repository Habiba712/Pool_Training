#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int *ft_range(int min, int max){
	
	if(min >= max) return 0;
	int len = max - min;
	int val = min + 1;
	int i = 0;

	int *ptr = (int *)malloc(sizeof(int) * len);

	while((i < len) && (val < max)){
		*(ptr + i) = val;
		val++;
		i++;
	}
	return ptr;
	
}
	


int main(void){
	int min = 3;
	int max = 39;
	int *res = ft_range(min, max);
	
	int i = 0;
	while(i < (max - min - 1)){
		printf("%d", *(res + i++));
	}
	
	return 0;
}
