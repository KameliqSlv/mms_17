/*
==============================================================================================
    Callback pointers :: Lesson 3
==============================================================================================
*/

#include <stdio.h>

void process(int data, int (*callback)(int)){
    int result = callback(data);
    printf("Result thought function callbaack: %d\n", result);
}// end of process()


int doubleNumber(int num){
    return num*2;
}// end doubleNumber()

int main(int argc,char* argv[]){
    //извикваме функцията
    process(7,doubleNumber);
    

    return 0;
}//end of main()