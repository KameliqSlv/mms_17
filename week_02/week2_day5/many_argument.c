#include <stdio.h>


typedef union {
    char c;
    double d;
    int i;
} A;
// 
typedef struct Arg{
    A argVal;
    int argvType;
} Arg;

void print(Arg a){
    if(a.argvType == 0){
        printf("%c ", a.argVal.c);
    }
     if(a.argvType == 1){
        printf("%lf ", a.argVal.d);
    }
     if(a.argvType == 2){
        printf("%d ", a.argVal.i);
    }
}


int maain(){
    Arg argChar = {
        (char)'c',
        0
    };
    //argChar.argType = 0;
    //argChar.argValue.c = "W"
    print(argChar);

    Arg argInt 

}