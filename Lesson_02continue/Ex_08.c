#include <stdio.h>
#include <stdint.h>


int main(int argc, char *argv[]) {
    unsigned short A, B;
    printf("Enter num A /0-100/ : ");
    scanf("%hd", &A);

    printf("Enter num B /0-100/ : ");
    scanf("%hd", &B);

    printf("\nOperand A is %d \n", A);
    printf("Operand B is %d \n\n", B);

    //AND
    printf("A&B: %d\n", A&B );
    
    //OR
    printf("A|B: %d\n", A|B );
    
    //XOR
    printf("A^B: %d\n", A^B );
    
    //NOT
    printf("~A: %d\n", ~A );
    printf("~B: %d\n", ~B );

    //LEFT SHIFT
    printf("A<<1: %d\n", A<<1 );
    printf("B<<1: %d\n", B<<1 );
    
    //RIGHT SHIFT
    printf("A>>1: %d\n", A>>1 );
    printf("B>>1: %d\n", B>>1 );


    return 0;
}//end of main()