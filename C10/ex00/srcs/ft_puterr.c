#include <unistd.h>
#include "ft_display_file.h"

void ft_puterr(char *str){

	write(2, str++, 1);

}
