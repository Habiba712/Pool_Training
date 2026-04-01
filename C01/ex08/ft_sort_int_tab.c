#include <unistd.h>

void ft_putchar(char c){
        write(1, &c, 1);

}

void ft_sort_int_tab(int *tab, int size){

        int temp;
	int i = 0;

        while( i <= size -1){
	       if (tab[i] > tab[i + 1]){
	          temp = tab[i];
	          tab[i] = tab[i + 1];
	          tab[i + 1] = temp;
                  i = 0;
	       }
               else{
                  i++;
                }
          }

}

int main(void){
       int tab[5] = {3,5,1,4,2};
       int size = 5;
       int i;
       ft_sort_int_tab(tab, size);
       while(i <= size -1){
               ft_putchar(tab[i] + '0');
               i++;
        }
       return 0;

}

