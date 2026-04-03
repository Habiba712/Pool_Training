#include <unistd.h>

char *ft_strncat(char *dest, char *src, int nb){
	int i = 0;
	int j = 0;

	while(dest[i])
	{
		i++;
	}	
	while(src[j] && j < nb){
		dest[i] = src[j];
		i++;
	        j++;
	}
	dest[i] = '\0';
	return dest;
}


int main(void){
	char *src= "Habiba";
	char dest[12] = "Taliby";
	int n;
	n = 3;
	char *res = ft_strncat(dest, src, n);
	int i = 0;
	while(dest[i]){
		write(1, &dest[i], 1);
		i++;
	}
	return 0;
}
