/*
==============================================================================================
    Recursion ::  Fibonacci :: Lesson 3 
==============================================================================================
*/

#include <stdio.h>


int fib(int n); //prototype at fib() 


int main(int argc, char* argv[]){
    int n;
    printf("Input a number: ");
    scanf("%d",&n);
    
    printf("Rhe value of %d element is: %d \n", n,fib(n));
    
} //end if main


int fib(int n){
    if(n == 0){
        return 0;
    } else if ( n == 1){
        return 1;
    }else {
        return fib(n - 1) + fib(n-2); //recursive case
    }
} //end of fib()


