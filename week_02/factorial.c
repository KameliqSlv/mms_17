#include <stdio.h>

//n
//n*(n-1)*(n-2)

int fact(int n){
    if(n == 0 || n == 1) return 1;
    return n*fact(n-1);
}

//faxt(5) = 5*fact(4)
//fact(4) = 4*fact(3)
//fact(3) = 3*fact(2)
//fact(2) = 2*fact(1)   
//fact(1) = 1*fact(0)
//fact(0) = 1
//fact(1) = 2

int main(){


}