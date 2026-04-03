#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){
	int i = 0;
	if( n == 0)
		return 0;

	while(s1[i] == s2[i] && s1[i] != '\0' && i < n - 1 ){
		i++;
		}
	return((unsigned char)s1[i] - (unsigned char)s2[i]);

}

int main(void){
	char *str1 = "oat";
	char *str2 = "oat";
	unsigned int n;
	n = 3;

	int res;
	res = ft_strncmp(str1, str2, n);
	printf("%d", res);
	return 0;
}
