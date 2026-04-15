#include <unistd.h>
#include <stdlib.h>

//create a duplicate of a string in another part of the memory and return the adress of that copy
//malloc ==== Memory Allocation. It puts data in the Heap. the Data stays alive until we kill it
//up until now we only had Data on the stack, meaning it dies when the fucntion ends.
// in C03 for instance, we created dest/memory bepfre calling the fucntion, meaning we used an already exisiting memory, but here we CREATE the memory first (malloc) then we fill it with the Data.



char *ft_strdup(char *src){
	
	int len = 0;
	while(src[len]){
		len++;
	}
	char *dest = (char *)malloc(sizeof(char) * (len + 1));
	
	int i = 0;
	while(src[i]){
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	
	return dest;
}

int main(void){
	char *src = "Habiba Taliby";
	char *res = ft_strdup(src);

	int i = 0;
	while(res[i]){
		write(1, &res[i], 1);
		i++;
	}
	write(1, "\n" ,1);
	return 0;
}


