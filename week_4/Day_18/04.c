// Mutex

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int counter = 0;
pthread_mutex_t my_mutex;

// 1 -> Initialize
// 2 -> Destroy
// 3 -> lock
// 4 -> unlock

void* myTask1(){
    for(int i = 0; i< 10000; i++){

        pthread_mutex_lock(&my_mutex);
        
        counter++;
        //read counter 
        //increment counter
        //write counter

        pthread_mutex_unlock(&my_mutex);
    }

    return 0;   
   // printf("Ending thread \n");
}

int main(){
    pthread_t tr1, tr2;

    pthread_mutex_init(&my_mutex, NULL);

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

    printf("my count : %d\n", counter);

    pthread_mutex_destroy(&my_mutex);
    
    return 0;
}


//gcc file.c -lm -pthread -o file