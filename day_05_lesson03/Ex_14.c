/*
==============================================================================================
    Recursion :: Factorial :: Lesson 3
==============================================================================================
*/

#include <stdio.h>

int fact_for(int n);
int fact_rec(int n);

int main(int argc, char* argv[]){
    
    printf("Factorial by for : ");
    printf("%d \n", fact_for(5));

    printf("Factorial by rec : ");
    printf("%d \n", fact_rec(5));


    return 0;
}//end of main()

// calculate with for loop
int fact_for(int n){
    int result = 1 ;
    for(int i =  1 ; i<= n;i++){
        result *= i;
    }

    return result;

}//end of fact_for


//calulate with recursion
int fact_rec(int n){
    if(n ==0 || n == 1){
        return 1;
    } else {
        return n * fact_rec(n - 1); //Recursive case 
    }
}//end of fact_rec