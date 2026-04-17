#include <stdio.h>
#include "libft.h"


int main(void){
	
	char *s1 = "Habiba";
	char *s2 = "Hab";
	int res = 0;
	res = ft_strcmp(s1, s2);	
	printf("%d", res);
	
	return 0;

}
