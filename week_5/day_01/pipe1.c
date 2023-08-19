#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int pipe_fd[2];
    // pipe_fd[0] e fd отворен за четене
    // pipe_fd[1] e fd отворен за писане

    int pid = fork();
    
    if(pid < 0){
        exit(-1);
    }else if(pid == 0){
        //close(pipe_fd[0])
        //child
        int n = rand()%1000;
        //pipe_fd[1];
        printf("N is %d\n", n);
        if(write(pipe_fd[1], &n, sizeof(n)) != sizeof(n)){
            perror("Write error");
        };
        //close(pipe_fd[1]); // child has finished writing pipe
    }else {
        // close(pipie_fd[1]);
        int res;
        if(read(pipe_fd[0],&res, sizeof(res)) != sizeof(res)){
            perror("Read error");
        }
        printf("Res: %d\n", res);
    }
}