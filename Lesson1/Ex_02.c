#include <stdio.h>

int square(int num){
    return num * num;
}

int main(int argc, char* argv[]){
    //int num = 5;
    int num;
    printf("Input number: ");
    scanf("%d", &num);
    
    int result = square(num);
    printf("%d squared is %d \n" , num, result);
}