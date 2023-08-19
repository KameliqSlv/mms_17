#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>     // Important
//#include <time.h>       // Important
#include <sys/wait.h>
#include <sys/errno.h>
#include "sys/types.h"



/*
    Да напишем програма, в която да използваме два процеса,
    и да използваме пипи()-функцията за да осъществим
    комуникация между двата процеса
*/


int main(int argc, char *argv[]){
    // { 1 }
    //create a pipe using fd-file description
    int fd[2]; // fd == file descriptor
    // fd[0] - READ pipe
    // fd[1] - WRITE pipe

    //pipe(fd);

    if(pipe(fd) == -1){
        printf("An error occurred opening pipe! \n");
        return 1;
    }


    int pid = fork();

    if(pid == -1){
        printf("An error occurred with ffork pipe! : \n");
        return 2; // fork
    }

    //check the process
    if (pid == 0){
        // [1] we are in the CHILD process
        //we are in CHILD
        close(fd[0]); // [[0] closed for reading
        int A;
        printf("Input the value: ");
        scanf("%d", &A);
        if(write(fd[1],&A,sizeof(A)) == -1){
            printf("An error occurred with writing pipe! : \n");
            return 3; // error writing into pipe
        } 
        close(fd[1]); // [1] closed for WRITING
    } else {
        // [2] we are in the PARENT process
        // we are in the PARENT process
        close(fd[1]);// [1] closed for WRITING
        int B;
        if(read(fd[0], &B,(sizeof(B))) == -1){
            printf("An error occurred with reading pipe! : \n");
            return 4; // error redinf into pipe
        }
        printf("Read from CHILD process : %d\n", B);
        B *= 10;
        printf("The result from PARENT process is %d\n", B);
        close(fd[0]);// [0] closed for READING
    }



    return 0;
}
