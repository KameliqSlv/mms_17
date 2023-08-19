#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    if(argc != 3){
        fprintf(stderr, "Invalid \n");
    }

    //FILE *f = fopen("abc.txt", "w+");

    FILE *f2 = fopen(argv[1], "w");
    size_t N = atoi(argv[2]); 
    for(size_t i = 0; i < N; i++){
        fwrite(&i, sizeof(i), 1, f2);
/*
 char buf[10];
    while((num_read = fread(buf, sizeof(char),sizeof(buf),f)) > 0){
        fwrite(buf, sizeof(char),num_read,stdout);
 //       putchar('\n');
    }

*/
    }

    /*
    for(int i = 0; i < argc; i++){
        int val = atoi(argv[i]);
        //изпраща форматиран изход към поток
        fprintf(f, "%d", val); 
        if(i < argc){
            fprintf(f, " ");
        }
    }

    fclose(f);
    */
    fclose(f2);

    return 0;
}

  