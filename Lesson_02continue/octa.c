//Presmqtane na osmichna brojna sistema 

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int number = 347;
    int base = 8;
    int result = 0;
    int placeValue = 0; // It is position in number



    while (number > 0){
        int digit  = number % base; // digit of the number
        result += digit * pow(base, placeValue);
        placeValue++;
        number /= 8;
        printf("My result: %d \n", result);
    } // end of  while loop



    printf("\nNumber is : %o \n", result);

    return 0;
} // end of main