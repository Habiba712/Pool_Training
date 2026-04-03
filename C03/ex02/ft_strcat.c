#include <unistd.h>

char *ft_strcat(char *dest, char *src){
	
	int i = 0;
	int j = 0;
	while(dest[i])
	{
		i++;
	}
	while(src[j]){
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	
	return dest;
}

int main(void){
	char *src= "Habiba";
	char dest[13] = "Taliby";

	char *res = ft_strcat(dest, src);
	int i = 0;
	while(res[i]){
		write(1, &res[i], 1);
		i++;
	}
	return 0;
}
