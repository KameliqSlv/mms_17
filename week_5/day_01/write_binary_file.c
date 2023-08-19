#include<stdio.h>
 
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
    if(argc != 3) {
        perror("Argc");
        exit(-1);
    }
    FILE* f1 = fopen(argv[1], "w");
    if(!f1) {
        perror("File open error\n");
        exit(-1);
    }
    long int N;
    // printf("%s\n", argv[2]);
    // Remove N =  :)
    N = strtol(argv[2], NULL, 10); 
    if(N == 0) {
        perror("First arg must be number\n");
        exit(-1);
    }
    for(size_t i = 0; i < N; i++) {
        fwrite(&i, 1, sizeof(int), f1);
    }
    fclose(f1);
    exit(0);
}