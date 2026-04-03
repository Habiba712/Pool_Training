#include <unistd.h>
#include <stdio.h>


unsigned int ft_strlcat(char *dest, char *src, unsigned int size){

	unsigned int d_len = 0;
	unsigned int s_len = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	while(dest[d_len] && d_len < size){
		d_len++;
	}
	while(src[s_len]){
		s_len++;
	}
	if(size <= d_len){
		return size + s_len;
	}
	

	while(src[j] && (i + 1) < size){
		dest[i] = src[j];
		j++;
		i++;
	}	
	dest[i] = '\0';
	return (d_len + s_len);
}




int main(void){
	char *src = "Habiba";
	char dest[16] = "Taliby";
	unsigned int size = 20;
	unsigned int res = ft_strlcat(dest, src, size);
	printf("%d", res);

	return 0;
}
