#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
	
}

char *ft_strncpy(char *dest, char *src, int n){
	int i = 0;
	while ( i < n && src[i] != '0'){
		dest[i] = src[i];
		i++;
	}
	while (i < n) {
		dest[i] = '\0';
		i++;
	}	
	
	
	return dest;
}



int main(void){
	char *str = "Habiba Taliby";
	char dest[10];
	int size = sizeof(dest);
	ft_strncpy(dest, str, size);
	int j = 0;
	while(j < 10){
		ft_putchar(dest[j]);
		j++;
	}
	return 0;

}
