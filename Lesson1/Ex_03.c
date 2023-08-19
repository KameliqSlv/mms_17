#include <stdio.h>

int myVar; //globalna promenliwa


void myFunction(){
    //int myVar = 5 lokalna promenliwa poneve e lokalna samo za funkciqta
    myVar = 5;
    printf("The value of myVar inside the myFunction() is %d \n", myVar );
}

int main(int argc, char* argv[]){
    myFunction();
    printf("The value of myVar inside the myFunction() is %d \n", myVar );

}