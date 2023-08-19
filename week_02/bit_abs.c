#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>




int main(){
    int64_t a;
    scanf("%lu", &a);
    
    abs(a);
    printf("a = %ld\n", a);

    printf("%lu\n",  (~(a) + 1));
    //printf("%lu\n",  ~(a - 1));
    int sign_bit_value = !!(a&(1ULL<< 63));
    //printf("%lu\n",  ~(a - 1) * sign_bit_value);
    //printf("%lu\n",  a * !sign_bit_value);
    
    //printf("%lu\n",  ~(a - 1) * sign_bit_value + a * !sign_bit_value);
    
    /*
    unsigned c
    
    
    
    */

//==================================================================
    double b = -12.5;
    scanf("%lf", &b);

    
    printf("\na = %.2lf\n", fabs(b));

    //uint64 bita move da pazi bitowete na double(8 bytes == 64 bit)
    //kaswame me kym ukazatel 
    //
    uint64_t c = *(uint64_t*)&b;
    c = c & ~(1ULL << 63);
    
    //1ULL << 63)
    //1000000000000000000
    //tyrsim tazi maska 
    //~011111111111111111111

    b = *(double*)&c;
    

    //printf("%lu\n",  ((b) + 1));

    //01000001010010000000000000000000
    //11000001010010000000000000000000

    printf("%lf\n", b);


    return 0;


}