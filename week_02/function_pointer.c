#include<stdio.h>

void printHaight(int a){
    printf("my heaight is : %d \n",a);
}

void printMsg(void (f)(int)){
    printf("Hello: ");
    f(10);
}

void printAge(int a){
    printf("My age is %d \n", a);
}

int main(){
    void(*f)(int) = printHaight;

    //double (*p)(int, int) :: приема два инт и веъща double
    


    printf("%p\n", f);
    printf("%lu\n", sizeof(f));
    printMsg(printHaight);
    printMsg(printAge);
    f(20);
}