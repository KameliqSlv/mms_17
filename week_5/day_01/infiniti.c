#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void onInterrupt(int sigNum){
    printf("cannot be interupted\n");
}

void ontTetminate(int sigNum){
    printf("Stopping program \n");
    exit(-1);
}

int main(){
    signal(SIGINT, onInterrupt);
    signal(SIGTERM, ontTetminate);
    signal(SIGKILL, ontTetminate);
    while(1){
        printf("Hello world!\n");
    }
}