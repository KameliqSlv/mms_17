#include <stdio.h>

int swapPointers(int* pnt1, int* pnt2);

int main(int argc, char *argv[]) {
    int a = 5;
    int b = 10;

    int* pnt_a = &a;
    int* pnt_b = &b;

    printf("Address:\nptr_a = %d\nptr_b = %d\n", *pnt_a, *pnt_b);

    swapPointers(pnt_a, pnt_b);
    printf("\nAdress after swap pointers:\nptr_a = %d\nptr_b = %d\n", *pnt_a, *pnt_b);

    return 0;
}//end of main

int swapPointers(int* pnt1, int* pnt2){
    int temp = *pnt1;
    *pnt1 = *pnt2;
    *pnt2 = temp;
    return 0;
} //end of swapPoint 
