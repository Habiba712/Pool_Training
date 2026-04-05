#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str){
	int s_len = 0;
	while(str[s_len]){
		s_len++;
	}
	return s_len;
}



int main(void){
	
	char *str = "";
	int res;
	res = ft_strlen(str);
	printf("%d", res);
	return 0;
}
