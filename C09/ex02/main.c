#include "ft_putchar.h"



int main(void){
	char *str = "Habiba";
	int i = 0;
	while(str[i]){
		ft_putchar(str[i++]);
	}
	return 0;
}
