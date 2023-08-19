#include <stdio.h> 
#include <stdlib.h>


int main(int argc, char *argv[]){
    if(argc != 2){
        perror("Invalin\n");
    }
    FILE *f = fopen(argv[1], "r");
    
    if(!f){
        perror("fopen error\n");
    }

    size_t cur_num, sum =0;
    while(fscanf(f, "%ld", &cur_num) != EOF){
            sum+= cur_num;
        }
    printf("%ld\n" , sum );

    /*
    FILE *f = fopen("abc.txt", "r");

    int num, sum = 0;

    //чете форматиран пвход от поток
    while(fscanf(f, "%d", &num) != EOF){
        sum += num;
    }

    printf("%d \n", sum);*/
}