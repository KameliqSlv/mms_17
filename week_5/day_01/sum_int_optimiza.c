#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define READ_INT_COUNT 10000

int main(){
    int *cur_num = malloc(READ_INT_COUNT*sizeof(int));
    unsigned long long sum = 0;
    int num_read = 1;
    do{
        //this 
        //cur_num = 0;
        // Syscall for ech 4 bytes in input - slow
        num_read = read(STDIN_FILENO, cur_num, sizeof(int) * READ_INT_COUNT);
        //printf("Num read: %3d, currNum(HEX): %10x , curNum(DEC) %5d \n", num_read, cur_num, cur_num);
        for(size_t i = 0 ; i < num_read / sizeof(int); i++){
            sum += cur_num[i];
        }
    } while(num_read > 0);
    //or
    //sum-=cur_num;
    printf("%lld \n", sum);

    free(cur_num);
    return 0;
}


// чете бинарно от стандартния вход а не тестово