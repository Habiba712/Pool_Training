#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}
void ft_rev_int_tab(int *tab, int size){

	int i = 0;
	int j = size -1;
	int store;

	while ( i < j ){
		store = tab[i];
		tab[i] = tab[j];
		tab[j] = store;
	
		i++;
		j--;
	}

}



int main(void){

	int tab[] = {1,2,3,4,5};
	int size = sizeof(tab) / sizeof(int);


	ft_rev_int_tab(tab, size);
	return 0;

}
