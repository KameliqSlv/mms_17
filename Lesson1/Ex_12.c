#include <stdio.h>

double celsius(double f);


int main(int argc, char *argv[]) {
    double fohrenheit;
    printf("Enter temperature of fohrenheit: ");
    scanf("%lf", &fohrenheit);

    double cel = celsius(fohrenheit);
    printf("%.2f F is equal to %.2f C \n", fohrenheit, cel);
}

double celsius(double f){
    return (f -32)*5/9;
}