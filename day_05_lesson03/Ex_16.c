/*
==============================================================================================
    Type of function :: Lesson 3
==============================================================================================
*/

#include <stdio.h>

//function prototype ::
void print_name();
void mult_a_b(int a, int b);
int div_a_b(int a, int b);

int main (int argc, char* argv[]){
    //без параметри без връщане на стойност
    print_name();


    // с параметру без връщане на стойност 
    mult_a_b(5, 7 );

    // с параметри и с връюане на стойност 
    printf("Result: %d\n", div_a_b(20, 4));

    return 0;
}// end of main(0)


//без параметри без връщане на стойност
void print_name(){
    printf("Kami\n");
}// end of function print_name()


// с параметри без връщане на стойност 
void mult_a_b(int a, int b){
    int result = a * b;
    printf("Result: %d\n", result);
} //end of mult_a_b()


// с параметри и с връщане на стойност
int div_a_b(int a, int b){
    return a / b;
} //end of div_a_b()



