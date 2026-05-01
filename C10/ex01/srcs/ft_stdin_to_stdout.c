#include "../includes/ft_cat.h"

void stdin_to_stdout(void){
	  char buffer[30000];
          int bytes;

          bytes = read(0, buffer, 30000);
          while((bytes = read(0, buffer, 30000))> 0){
                write(1, buffer, bytes);
          }

}
