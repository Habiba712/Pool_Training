#include <stdlib.h>
#include "ft_stock_str.h"



int ft_strlen(char *str){
	int i = 0 ;

	while(str[i]){
		i++;
	}
	return i;
}


char *ft_strdup(char *str){
	int i = 0;
	int len = 0;

	while(str[len]) len++;

	char *copy;
	copy = malloc(sizeof(char *) * (len + 1));

	while(str[i]){
		copy[i] = str[i];
		i++;
	}

	return copy;
}

struct s_stock_par *ft_strs_to_tab(int ac, char **av){
	
	int i = 0;

	t_stock_par *arr;
	arr = malloc(sizeof(t_stock_par) * (ac + 1));

	while(i < ac){
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
	i++;	
	}

	arr[ac].str = 0;


	return arr;
	

}


int main(void){
	
	int size = 9;
	char *tab[] = {"Habiba", "Taliby", "is", "going", "to", "be", "a", "1337", "student"};
	

	struct s_stock_par *res = ft_strs_to_tab(size, tab);
	return 0;
}
