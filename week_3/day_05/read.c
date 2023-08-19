#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f = fopen("test.txt", "r");

    if(!f) exit(-1);
    
    size_t num_read;
    
    char buf[10];
    while((num_read = fread(buf, sizeof(char),sizeof(buf),f)) > 0){
        fwrite(buf, sizeof(char),num_read,stdout);
 //       putchar('\n');
    }



    fclose(f);


}