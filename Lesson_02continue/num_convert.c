#include <stdio.h>

int main(int argc, char* argv[]){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    while (num > 0){
        int binary = num % 2;
        printf("%d  \n", binary);
        num /=2;
    }

    return 0;
}