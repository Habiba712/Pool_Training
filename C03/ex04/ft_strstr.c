#include <unistd.h>

char *ft_strstr(char *str, char *to_find){
	int i = 0;
	
	if (to_find == "")
		return str;

	while(str[i] != '\0'){
		int j = 0;
		while( str[i + j] == to_find[j]){
			
			if(to_find[j + 1] == '\0')
				return &str[i];
		j++;	
		}	
	i++;
	}
	return 0;

}
int main(void) {
	char *str = "The Most Complete Fighter In The World";
	char *to_find = "Fighter";

	char *res = ft_strstr(str, to_find);
	write(1, res, 1);
	
	return 0;
}

