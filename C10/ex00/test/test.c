#include <unistd.h>


int main (void){

	char b[30];

	write(1, "Enter your name", 17);
	read(0, b, 30);
	write(1, "You entered: ", 17);
	write(1, b, 30);
	return 0;

}
