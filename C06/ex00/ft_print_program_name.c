#include <unistd.h>

	
int main(int argc,char **argv){
	// agrc: Argument Count. an int that tells us how many words were typed.
	// argv: Argument Vector: an array of strings containing these words.
	// the name of the program is the first thing in the list.
	int i;
	if(argc > 0){
	
		i = 0;
		while(argv[0][i] != 0){
			i++;
		}

		write(1, argv[0], i);
	}
	write(1, "\n", 1);
	return 0;

}
