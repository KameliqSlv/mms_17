//Passing string comunicate between process

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>     // Important
//#include <time.h>       // Important
#include <sys/wait.h>
#include <sys/errno.h>
#include "sys/types.h"


int main(int argc, char *argv[]){
    // { 1 } Create FD and pipe
    int fd[2];
    // [0] -> read
    // [1] -> write

    pipe(fd);



    // { 2 } crete a new process fork()

    int pid = fork();

    // { 3 } switching berween process and send string

    //wait(NULL);
    // CHILD process send /write/ string 
    if(pid == 0){
        close(fd[0]);
        char my_str[255];
        printf("Please input string: ");
        fgets(my_str, 255, stdin);

        if(write(fd[1], my_str, strlen(my_str)) == -1){
            printf("Error \n");
            return 1;
        }   
        printf("String send %s", my_str);
        close(fd[1]);

    }else {
        close(fd[1]);
        
        char my_str[255];
        
        if(read(fd[0], &my_str, sizeof(my_str)) < 0){
            return 4;
        }   
        
        close(fd[0]);

        printf("Receive from child process: %s\n", my_str);

        wait(NULL);
    }

    // PARENT receive /read/ string and print 

    return 0;
}