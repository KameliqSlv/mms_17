#include <stdio.h>  

int main(int argc, char* argv[]){
    float val1, val2, val3, avg;
    scanf("%f %f %f", &val1, &val2, &val3);
    avg = (val1 + val2 + val3) / 3;
    printf("Media: %.1f\n", avg);   
}