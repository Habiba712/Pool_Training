#include <unistd.h>


char *ft_strcpy(char *dest, char *src){
	
	int i = 0;
	
	while(src[i] != '\0'){
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;

}


int main(void){
	char *string = "Habiba Taliby";
	int des_len = 0;
	int i = 0;

	while(string[i] != '\0'){
		des_len++;
		i++;
	}
	char destination[des_len + 1];

	ft_strcpy(destination, string);
	
	return 0;
}
