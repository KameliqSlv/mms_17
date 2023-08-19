#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>     // Important
//#include <time.h>       // Important
#include <sys/wait.h>
#include <sys/errno.h>
#include "sys/types.h"


int main(){
    pid_t id1 = fork();
    pid_t id2 = fork();

    if(id1 > 0 && id2 > 0){
        wait(NULL);
        wait(NULL);
    }
}