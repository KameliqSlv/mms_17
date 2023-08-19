/*
==============================================================================================
    Pointers to a function :: Lesson 3
==============================================================================================
*/

#include <stdio.h>

//int (*Add_Pnt)(int, int);

int add(int a, int b) {
    return a+b;
} // end of add()



int main(int argc, char* argv[]){

    printf("Result : %d \n", add(5,6));

    //Add_Pnt = add;
    int (*Add_Pnt)(int a, int b);
    //int (*Add_Pnt)(int, int);
    Add_Pnt = add;
    
    int result = (*Add_Pnt)(5,5); // full notation
    printf("Result with pointer full: %d \n", result);
    
    result = Add_Pnt(3,5); // short notation
    printf("Result with pointer short: %d \n", result);

    return 0;
}//end of main()