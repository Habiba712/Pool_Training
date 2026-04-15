#include <unistd.h>
#include <stdlib.h>

char *ft_strjoin(int argc, char **argv){

	char *ptr = (char *)malloc(sizeof(char) * 10000);
	int i = 1;
	int j;
	int k = 0;
	while(i < argc){
		j = 0;
		while(argv[i][j] != '\0'){
			ptr[k] = argv[i][j];
			j++;
			k++;
		}
	
	ptr[k] = '\n';
	i++;
	k++;
	}

	ptr[k] = '\0';

	return ptr;

}


int main(int argc, char **argv){
	
	char *res  = ft_strjoin(argc, argv);
	int i = 0;

	while(res[i]){
		write(1, &res[i], 1);
		i++;
	}
	return 0;

}
