#include <unistd.h>
#include <stdio.h>


int check_base(char *base){
	int i = 0;
	int j = 0;
	if(!base[0] || !base[1])
		return 0;
	while(base[i]){
		if(base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return 0;
		j = i + 1;
		while(base[j]){
			if(base[i] == base[j])
				return 0;
		j++;
		}
	i++;
	}
	return i;	
}

int get_index(char c, char *base){
	int i = 0;
	while(base[i]){
		if(base[i] == c)
			return i;
		i++;
	}
	return -1;
}
int ft_atoi_base(char *str, char *base){
	int i = 0;
	int j = 0;
	int sign = 1;
	int nbase = check_base(base);
	int res = 0;
	int value = 0;

	if (nbase == 0) return 0;
	

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	while(str[i] == '+' || str[i] == '-'){
		if(str[i] == '-')
			sign = -sign;
		i++;
	}
	while(str[i]){

		value = get_index(str[i], base);
		if (value == -1) break;

		res = res * nbase + value;
		i++;
	}
	return res * sign;


}


int main(void){

	char *str = " --12y345";
	char *base = "0123456789";

	int res = ft_atoi_base(str, base);
	printf("%d", res);
	return 0;
}
