// semaphores
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define THREAD_NUM 4


//Settirn semaphore::
// 1 -> sem_t mySem;
// 2 lock -> set_wait; //In func
// 3 unloc -> sem_post() // in func
// 4 sem_init( , , , ) // main()
// 5 sem_destroy(&); // main()

sem_t mySem;

//create my function /routine/
void *myFunct(void *arg){
    sem_wait(&mySem); // Decrement counter
    sleep(3);
    printf("Hello from thread %d\n", *(int*)arg);
    free(arg);


    sem_post(&mySem); // Increment counter
    return 0;
}


int main(){
    pthread_t threads[THREAD_NUM];
    sem_init(&mySem, 0, 2); //брои нишките по две

    for(int i = 0 ; i < THREAD_NUM; i++){
        //create create variable by memory allocation
        int *a = malloc(sizeof(int));
        *a = i;
        if(pthread_create(&threads[i], NULL, myFunct, a) != 0){
            printf("Error creating thread");
        }
    }

    for(int i = 0 ; i < THREAD_NUM; i++){

        if(pthread_join(threads[i], NULL) != 0){
            printf("Error joining thread");
        }
    }

    sem_destroy(&mySem);
    return 0;
}

