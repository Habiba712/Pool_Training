#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



int ft_atoi_base(char *nbr, char *base){
	int i = 0;
	int sign = 1;
	int nbase = 0;
	int value = 0;

	nbase = is_base_valid(base);
	if(nbase == 0) return 0;

	while(nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;

	while(nbr[i]){
		if(nbr[i] == '+') sign = sign;
		if(nbr[i] == '-') sign = -sign;
	i++;	
	}
	
	i = 0;
	while(nbr[i]){

	    value = get_index(nbr[i], base);
	    if(value = -1) break;
	    res = res * nbase + value;


	i++;
	}

	return res * sign;
}

int get_index(char *c, char *base){
	int i = 0;

	while(base[i]){
		if(base[i] == c) return i;
	i++;
	}

	return -1;

}

char ft_putnbr(int nbr){

	if(nbr < 0) 


}
char ft_itoa_base(int nbr, char *base){
	int i = 0;


	char *ptr = (char *)malloc(sizeof(char) * 1000);

	if(nbr < 0){
		ptr[0] = "-";		
	}
	if



	return charac;
}

int is_base_valid(char *base){
	int i = 0;
	int j = 0;

	if(!base[0] || !base[1]) return 0;
	
	while(base[i]){
		if(base[i] == ' ' || base[i] == '+'
		   base[i] == '-') return 0;
		j = i + 1;
		while(base[j]){
			if(base[i] == base[j]) return 0;
		j++;
		}	
	i++;
	}
	return i;
	

}


char *ft_conver_base(char *nbr, char *base_from, char *base_to){

	//turn the nbr to integer based on base_from
	int intger_base_from = ft_atoi_base(nbr, base_from);

	//turn the nbr to char based on base_to
	char integer_base_to = ft_itoa_base(integer_base_from, base_to); 	



}









int main(void){

	char *nbr = "0100101110101011";
	char *base_from = "01";
	char *base_to = "0123456789abcdef";
	int i = 0;
	
	char *res = ft_convert_base(nbr, base_from, base_to);
	
	while(res[i]){
		printf("%c", res[i]);
		i++;
	}

	return 0;
}
