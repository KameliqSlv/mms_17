#include <stdio.h>

int main(int argc, char* argv[]){
    int *pc, c;
    
    c = 22;
    printf("Adress of c: %p \n",&c);
    printf("Value of c: %d \n",c);

    pc = &c; //
    printf("\nAdress of pointer c: %p\n",&pc);
    printf("Cpntent of pointer c: %d\n",*pc);

    c = 11; // 1 = address of pointer 2 = content of pointer  
    printf("\nAdress of pointer c: %p\n",&pc);
    printf("Cpntent of pointer c: %d\n",*pc);

    *pc = 7; // dereferirame sydyrvanieto
    printf("\nAdress of pointer c: %p\n",&pc);
    printf("Cpntent of pointer c: %d\n",c);


    //Nqkoi chesti greshli koito dopuskame:
    
    pc = 7;

    // pc is address, but c is not
    pc = c;

    //&c is address, but *pc is not
    *pc = &c;

    // both $c and pc are address
    pc = &c;

    //both c and *pc are values
    *pc = c; 

    return 0;
}//end of main