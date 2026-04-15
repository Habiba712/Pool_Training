#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max){
	
	if(min >= max) return 0;

	int len = max - min;
	int val = min + 1;
	int i = 0;

	*range = (int *)malloc(sizeof(int) * len);

	while(i < len){
		(*range)[i] = val;
		val++;
		i++;
	}

	return len;
}

//we creat a pointer that points to nothing and we send its adress to the function
//that adress is now stored in a varibale range
//*range looks 
int main(void){

	int min = 3;
	int max = 39;
	int *ptr;

	int res = ft_ultimate_range(&ptr, min, max);
	
	printf("%d", res);
	printf("%ls", ptr + '0');
	printf("%s", "\n");

	return 0;
}
