#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

unsigned inft_strlcpy(char *dest, char *src, unsigned int size){

	int i = 0;
	int leng_src = 0;

	while(src[leng_src]){
		leng_src++;
	}
	
	if(size > 0){
		while(src[i] && (i < size - 1))
		{
			dest[i] = src[i];
			ft_putchar(dest[i]);
			i++;		
		}
		dest[i] = '\0';	
	
	}
	return leng_src;
}


int main(void){

	char *src = "";
	int size = 4;
	char dest[4];
	
	unsigned int res;
	res = inft_strlcpy(dest, src, size);	

	ft_putchar(res + '0');
	return 0;
}
