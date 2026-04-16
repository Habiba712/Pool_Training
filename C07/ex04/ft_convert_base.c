#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int get_index(char c, char *base){
        int i = 0;

        while(base[i]){
                if(base[i] == c) return i;
	        i++;
	        }

        return -1;

}
int is_base_valid(char *base){
        int i = 0;
        int j = 0;
        if(!base[0] || !base[1]) return 0;
        while(base[i]){
               if(base[i] == ' ' || base[i] == '+'
                 || base[i] == '-') return 0;
               j = i + 1;
               while(base[j]){
                    if(base[i] == base[j]) return 0;
                       j++;
               }
	i++;
        }
       return i;

}


int ft_atoi_base(char *nbr, char *base){
	int i = 0;
	int sign = 1;
	int nbase = 0;
	int value = 0;
	int res = 0;

	nbase = is_base_valid(base);
	if(nbase == 0) return 0;

	while(nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;

	while(nbr[i] == '+' || nbr[i] == '-'){
		if(nbr[i] == '-'){
		    sign = -sign;
		}
		i++;	
	}
	

	while(nbr[i]){

	    value = get_index(nbr[i], base);
	    if(value == -1) break;
	    res = res * nbase + value;


	i++;
	}

	return res * sign;
}



int get_num_len(int nbr, int nbase){
	int i = 0;
	int len = 0;
	long n = nbr;
	if (n <= 0) len++;

	while(n != 0){
		n /= nbase;
		len++;
	}

	return len;
}

char *ft_itoa_base(int nbr, char *base){
	int i = 0;
	int nbase = is_base_valid(base);
	int len = get_num_len(nbr, nbase);

	char *ptr = (char *)malloc(sizeof(char) * (len + 1));
	long n;

	if(!ptr) return NULL;
	n = nbr;

	ptr[len] = '\0';

	if(n < 0){
		ptr[0] = '-';
		n = -n;
	}
	
	if(n == 0) ptr[len - 1] = base[0];
	
	while(n > 0){
		ptr[len - 1] = base[n % nbase];
		n /= nbase;
		len--;
	
	}
	return ptr;
}



char *ft_convert_base(char *nbr, char *base_from, char *base_to){

	//turn the nbr to integer based on base_from
	int integer_base_from = ft_atoi_base(nbr, base_from);

	//turn the nbr to char based on base_to
	char *integer_base_to = ft_itoa_base(integer_base_from, base_to); 	


	return integer_base_to;
}



int main(void){

	char *nbr = "1010111101100001";
	char *base_from = "01";
	char *base_to = "0123456789abcdef";
	int i = 0;
	
	char *res = ft_convert_base(nbr, base_from, base_to);
	
	while(res[i]){
		write(1, &res[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
