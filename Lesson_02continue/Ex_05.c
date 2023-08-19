#include <stdio.h>
#include <stdint.h>



int main(int argc, char *argv[]) {
    // integer types

    // floating-point types
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;


    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long long: %lu bytes\n\n", sizeof(long long));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n\n", sizeof(double));


    printf("Size of void int8t: %lu bytes \n", sizeof(int8_t));
    printf("Size of void int16t: %lu bytes \n", sizeof(int16_t));
    printf("Size of void int32t: %lu bytes \n", sizeof(int32_t));
    printf("Size of void int64t: %lu bytes \n", sizeof(int64_t));




    return 0;
} //end of main