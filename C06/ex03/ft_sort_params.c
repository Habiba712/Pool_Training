#include <unistd.h>


int ft_strcomp(char *str1, char *str2){
	int i = 0 ;
	while(str1[i] && str1[i] == str2[i]){
		i++;
	}
	return (str1[i] - str2[i]);

}
int main(int argc, char **argv){
	int i;
	int j;

	if(argc > 0){
		i = 1;
		while(i < argc - 1){
			if(ft_strcomp(argv[i], argv[i + 1]) > 0){
			char *temp = argv[i];
			argv[i] = argv[i +1];
			argv[i + 1] = temp;
			i = 0;
			}
			// that means argv[i] is greater that argv[i +1]
			i++;
		}
		i = 1;
		while(argv[i]){
			j = 0;
			while(argv[i][j] != '\0'){
				write(1, &argv[i][j], 1);
				j++;
			}
		write(1,"\n",1);
		i++;
		}
	}
	return 0;
}
