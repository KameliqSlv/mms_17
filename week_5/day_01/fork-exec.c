#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int pid = fork();

    if(pid == 0){
        printf("Child process\n");
    } else {
        pid_t child_pid = wait(NULL);
        printf("Child pid %d", child_pid);
        printf("Parrenr process\n");
    }

//    printf("Hello world");

    return 0;
}