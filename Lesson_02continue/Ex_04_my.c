#include <stdio.h>


int main(int argc, char *argv[]) {
    int num = 347;

    while (num > 0){
        if(num % 2 == 0){
            printf("0");
        } else {
            printf("1");
        }
        printf("\n");
        num /= 2;
    }//end of while

    return 0;
} //end of main()