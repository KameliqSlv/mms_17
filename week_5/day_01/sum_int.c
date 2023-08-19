#include <stdio.h>
#include <unistd.h>

int main(){
    int cur_num;
    unsigned long long sum = 0;
    int num_read = 1;
    do{
        //this 
        cur_num = 0;
        // Syscall for ech 4 bytes in input - slow
        num_read = read(STDIN_FILENO, &cur_num, sizeof(cur_num));
        //printf("Num read: %3d, currNum(HEX): %10x , curNum(DEC) %5d \n", num_read, cur_num, cur_num);
        sum+=cur_num;
    } while(num_read == sizeof((cur_num)));
    //or
    //sum-=cur_num;
    printf("%lld \n", sum);

    return 0;
}


// чете бинарно от стандартния вход а не тестово