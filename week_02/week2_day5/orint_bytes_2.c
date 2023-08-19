#include <limits.h>
#include <stddef.h>
#include <stdio.h>

typedef union A{
    unsigned int ui;
    unsigned char bytes[4];
} A;


void printBytes (A a){
    for(size_t i = 0; i<4; i++){
        printf("%02x ", a.bytes[i]);
    } 
}

int main(){
    A u1;
    u1.ui = 254;

    printBytes(u1);
    u1.ui = INT_MAX - 2;
    printBytes(u1); 
    u1.ui = 9;
    printBytes(u1); 
    return 0;
}