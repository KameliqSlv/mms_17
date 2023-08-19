#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    int fd = open("otput.txt", O_WRONLY | O_CREAT | O_APPEND);
    if(fd < 0){
        return 0;
    }

    int fddupped;
    if((fddupped = dup2(fd, STDOUT_FILENO)) == -1){
        return 1;
    }

    printf("NEW FD: %d\n", fddupped);
    printf("Hello, world!\n");

    return 0;
}