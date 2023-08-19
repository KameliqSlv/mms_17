#include <stdio.h>
#include <stdint.h>


uint64_t checkBit(uint64_t mask, int bit){
    //return mask & (1 << bit);
    return (mask & (1<<bit)?1:0);
}//end of checkBit

void printBit(uint64_t mask){
    //return mask;
    for(int i = 16-1; i>=0; i--){
        printf("%lu",checkBit(mask,  i));
    }
}

void devide (unsigned n1){
    
        n1 &= ((1 << 2) -1);
        // 00000100
        // 00000010 - > 2 -1
        // 00000011
        //          &
        // 00000010 - > 2
    
}

int main(){
    unsigned int a = 4;
    unsigned int i = 2;

    printf("%u\n", a >> i);
    printf("%u\n", a & ((1 << i) - 1));

    printf("Mask: %d\n", a);
    printBit(a);
    printf("\n\n");


    devide(a);
    printBit(a);
    printf("\n\n");
    printf("%d\n", a);
    



    float a,b;
    fabs(a-b) < 0.001;

    //1/sqrt(x)

    cbrt(7);
    a * a * a == 7 > -0.001 &&
    a*a*a-7 < 0.001
    0.001
    0.002
    0.003
    .....
    6.998
    6.999




}








//Въвеждата се 2 цели положителни числа 
//използвайте побитови операции за да намерите цалочислени делене и остатък