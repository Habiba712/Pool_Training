#include <unistd.h>
#include <stdlib.h>



int  is_sep(char c, char *charset){

	int i = 0;

	while(charset[i]){
		if(c == charset[i]) return 1;
		i++;
	}

	return 0;
	
}

int count_words(char *str, char *charset){
	
	int count = 0;
	int i = 0;

	while(str[i]){
		//skip seperators
		
		while(str[i] && is_sep(str[i], charset))
			i++;

		if(str[i]){
			count++;
			while(str[i] && !is_sep(str[i], charset))
			       	i++;		
		}

	}

	return count;
}

char **ft_split(char *str, char *charset){
	
	int words = count_words(str, charset);

	char **arr = (char **)malloc(sizeof(char *) * (words + 1));

	int k = 0;
	int i = 0;
	

	while(k < words){
		
		int word_len = 0;

		while(str[i] && is_sep(str[i], charset)) i++;
		
		int start = i;

		while(str[i] && !is_sep(str[i], charset)){
		         	word_len++;		
				i++;
		}

		char *word = (char *)malloc(sizeof(char) * (word_len + 1));
		// now i need to copy characters from str to the new pointer word;
		int j = 0;
		while(j < word_len){
			word[j] = str[start + j];
			j++;			
			
		}
		word[j] = '\0';
		arr[k] = word;

	k++;
	}	
	arr[k] = 0;
	return arr;

}


int main(void){
	
	char *str = "Hello,wolrd;This|is|C";
	char *charset = ",;| |";

	char **res= ft_split(str, charset); //this is the adress of the adress of the array;

	int i = 0;

	while(*(res + 1)){
		int j = 0;
		while(res[i][j]){
			write(1, &res[i][j], 1);
			j++;
		}
	write(1, "\n" , 1);
	i++;
	}

	return 0;

}
