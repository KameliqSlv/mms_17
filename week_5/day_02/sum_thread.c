#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define K 10
unsigned int file_size;

void *thread_fum(void *args){
    printf("Strarted Theread with index: %d\n", *(int*)args);
    sleep(1);
    printf("Ending with index: %d\n", *(int*)args);
}

int main(int argc, char* argv[]){
    FILE *f1 = fopen(argv[1], "r");
    struct stat file_undo;
    pthread_t thread_handles[K];
    int thread_id[K];
    for(int i = 0; i < K;i++){
        //pthread_t t;
        thread_id[i] = i;
        pthread_create(thread_handles + i, NULL, thread_fum, thread_id+i);
    }

    for(int i = 0; i < K;i++){
        //pthread_t t;
        pthread_join(thread_handles[i], NULL);
    }

    return 0;
}