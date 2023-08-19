#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>     // Important
//#include <time.h>       // Important
#include <sys/wait.h>


int main(int argc, char *argv[]){
    int pid = fork(); //create a neew process

    // { 1 }
    //printf("Print pid: %d \n", pid);

    // { 2 }
    //printf("Print getpid() %d \n", getpid());

    // { 3 }
    //printf("Print getppid() : %d\n", getppid());

    // { 4 }
    //printf("Current pid : %d, parent pid: %d \n", getpid(), getppid());

    // { 5 }
/*      if(pid == 0){  // if the process id child
        printf("sleep 5 second ... \n");
        sleep(5);
     }
    printf("Current pid : %d, parent pid: %d \n", getpid(), getppid());
    printf("\n");  */


    // { 6.1 }
    /* if(pid == 0){  // if the process id child
        printf("sleep 5 second ... \n");
        sleep(5);
     }
    printf("Current pid : %d, parent pid: %d \n", getpid(), getppid());
    printf("\n"); 

    wait(NULL); 
 */
    // { 6.2 }
    if(pid == 0){  // if the process id child
        printf("sleep 5 second ... \n");
        sleep(5);
     }
    printf("Current pid : %d, parent pid: %d \n", getpid(), getppid());
    printf("\n"); 

    if(pid != 0){
        wait(NULL);
    }

    return 0;
}