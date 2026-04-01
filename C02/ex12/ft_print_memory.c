#include <unistd.h>
#include <stdio.h>


void put_addr(unsigned long addr, int depth){
        char *base = "012345789abcdef";
        if(depth < 15){
                put_addr(addr / 16, depth + 1);
	        }
	        write(1, &base[addr % 16], 1);
}

void put_hex(unsigned char c){
        char *base = "0123456789abcdef";
        write(1, &base[c / 16], 1);
        write(1, &base[c % 16], 1);
        }

void put_str(unsigned char *ptr, unsigned int size){
        unsigned i = 0;

        while ( i < size){
                if(ptr[i] >= 32 && ptr[i] <= 122){
                   write(1, &ptr[i] , 1);
                }
                else{
                   write(1, ".", 1);
                }
                i++;
        }
}

void *ft_print_memory(void *addr, unsigned int size){

        char *ptr = (unsigned char *)addr;
        int i = 0;
        int j = 0;
        if( size == 0){
            return addr;
        }
        while(i < size){
             put_addr((unsigned long)ptr + i, 0);

             write(1, ":", 1);
             while ( j < 16){
                   if ( i + j < size)
                      put_hex(ptr[i + j]);
                   else
                      write(1, "  ", 2);
                   if(j % 2 != 0){
                      write(1, " ", 1);
                      }
                   j++;
             }
         j = 0;
         if(i + 16 < size){
              put_str(ptr + i, 16);
           }
         else{
              put_str(ptr + i , size - i);
              int res;
              res = 16 - (size - i);
              while(res != 0){
              write(1, ".", 1);
              res--;
                    }
             }
	 write(1, "\n", 1);
	 i+= 16;
      }

}


int main(void){
       char str[] = "Hello World Dude.oiwej fow iejfo, ijew fwoeijf woe ijfoew ijv fe";
       ft_print_memory(str, sizeof(str));
       return 0;
}

