//calculate.c

#include <stdio.h>
#include "celsius.h"

int main(int argc, char* argv[]){
    double fohrenheit;
    printf("Enter temperature of fohrenheit: ");
    scanf("%lf", &fohrenheit);

    double cel = celsius(fohrenheit);
    printf("%.2f F is equal to %.2f C \n", fohrenheit, cel);
}