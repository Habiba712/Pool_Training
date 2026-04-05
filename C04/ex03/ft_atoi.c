#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str){

	int i = 0;
	int sign;
	int res;
	 while(str[i] == ' ' || (str[i] < 48 && str[i] > 57)){
	         i++;
	}

	if(str[i] == '-' || str[i] == '+'){
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	

	while(str[i] >= 48 && str[i] <= 57){

		res = (res * 10) + (str[i] - '0');
		i++;

	}

	return res * sign;

}


int main(void){
	char *str = " -1287";
	int res = ft_atoi(str);
	printf("%d", res);
	
	return 0;
}
	
