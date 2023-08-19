//Presmqtane na deseti`na brojna sistema 

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int number = 347;
    int base = 10;
    int result = 0;
    int placeValue = 0; // It is position in number


    

    while (number > 0){
        int digit  = number % 10; // digit of the number
        result += digit * pow(base, placeValue);
        placeValue++;
        number /= 10;
        printf("My result: %d \n", result);
    } // end of  while loop

        printf("\nNumber is : %d \n", result);

    return 0;
} // end of main