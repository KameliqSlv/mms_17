#include <limits.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    unsigned int a;
    unsigned char b;
} A;

void print_bytes(const void* p, int numBytes){
    char buf[numBytes];
    memcpy (buf, p, numBytes);
    for(size_t i = 0; i < numBytes; i++){
        printf("%02x ", (unsigned char)buf[i]);
    }
    printf("\n");
}


int main(){
    A a = {UINT_MAX-1, 254};
    print_bytes(&a, sizeof(A));
}