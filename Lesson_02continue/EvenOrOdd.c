#include <stdio.h>


int main(int argc, char *argv[]) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 != 0){
        printf("The number %d is odd! \n", num);
    } else {
        printf("The number %d is even! \n!", num);
    }

    return 0;
}//end of main