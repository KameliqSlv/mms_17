#include <stdio.h>

typedef struct A{

    unsigned int a : 3;
    //[0, 7] [0, 2^3-1]
    
    signed int b : 7;   //mojem da pishem do 32 bit
    // -2^7-1 , 2^(7-1) -1 [-64, 63]

    int c : 5;
    // signed int c : 5; [-2^4; 2^4-1]
    // unsigned int c : 5; [0; 2^5-1]
    // zawisi ot kompilatora 

    unsigned int d: 30;

}A;

int main(){
    //int d; //signed int d
    A a;
    a.a = 4;
    a.b = -63;
    a.c = 2;
    printf("%lu\n", sizeof(A));


}