#include <stdio.h>
#include <stdint.h>

uint16_t checkBit(uint16_t mask, int bit);
uint16_t setBit(uint16_t mask, int bit);
uint16_t clearBit(uint16_t mask, int bit);
void printBit(uint16_t mask);

int main(int argc, char* argv[]){
    uint16_t mask = 0xffff; //1111 1111  1111 1111 - 2 bytes x 8 bits

    printBit(mask);
    printf("\n");

    mask = clearBit(mask, 4);
    printf("Check  bit %d is %d\n",4,  checkBit(mask, 4));
    printBit(mask);
    printf("\n");

    mask = clearBit(mask, 15);
    printf("Check  bit %d is %d\n",15,  checkBit(mask, 15));
    printBit(mask);
    printf("\n");




    printf("Razpechatwane predo obrabotka: %d \n\n", mask);

    //Check bit mask
    printf("Check bit mask: %d \n", checkBit(mask, 0));
    printf("Check bit mask: %d \n", checkBit(mask, 1));
    printf("Check bit mask: %d \n\n", checkBit(mask, 2));
   //Set Bit Mask
    printf("Set bit: %d\n", setBit(mask, 0));
    printf("Set bit: %d\n", setBit(mask, 1));
    printf("Set bit: %d\n\n", setBit(mask, 2));

    //Clear bit mask
    printf("Clear bit: %d\n", clearBit(mask, 0));
    printf("Clear bit: %d\n", clearBit(mask, 1));
    printf("Clear bit: %d\n\n", clearBit(mask, 2));

    //Prinyt bit mask
    //printf("Prinyt bit: %d\n", printBit(mask));
    //printf("Prinyt bit: %d\n", printBit(mask));
    //printf("Prinyt bit: %d\n\n", printBit(mask));


    return 0;
}//end of main


uint16_t checkBit(uint16_t mask, int bit){
    //return mask & (1 << bit);
    return (mask & (1<<bit)?1:0);
}//end of checkBit

uint16_t setBit(uint16_t mask, int bit){
    return mask | (1 << bit);
}//end og setBit

uint16_t clearBit(uint16_t mask, int bit){
    return mask & ~(1 << bit);
}//end of clear bit function

void printBit(uint16_t mask){
    //return mask;
    for(int i = 16-1; i>=0; i--){
        printf("%d",checkBit(mask,  i));
    }
} //end of prinyBit function