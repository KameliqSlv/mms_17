#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f = fopen("test.txt", "r");

    if(!f) exit(-1);
    
    char c;
    while((c = fgetc(f)) != EOF) {
        putchar(c);
    }

    putchar('\n');
    char buf[10];
//     rewind(f); //wryshta pyrwiq simwol
    fseek(f,0,SEEK_SET);
    printf("%ld\n ", ftell(f));
    while(fgets(buf, 10, f) != NULL){
        
        fputs(buf, stdout);
    }

    
/*
    fgetc(f);

    char buff[255];
    //fscanf(f, "%s", buff);
    //printf("%s\n", buff);
    fgets(buff, 255, f);
    puts(buff); 
   
    fclose(f);*/
}