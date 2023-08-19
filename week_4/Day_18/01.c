#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void* myTask1(){
    printf("Hello from my task01 \n");
    printf("Ending thread \n");
}

int main(){
    pthread_t tr1, tr2;

    if(pthread_create(&tr1, NULL,&myTask1, NULL) != 0){
        return 1;
    }
    if(pthread_create(&tr2, NULL,&myTask1, NULL) != 0){
        return 2;
    }

    if(pthread_join(tr1, NULL)!=0){
        return 3;
    }
    if(pthread_join(tr2, NULL)!=0){
        return 4;
    }

    return 0;
}


//gcc file.c -lm -pthread -o file