#include <stdio.h>
#include <unistd.h>

int main(){
    //execl("./infinite", "./infinite", NULL);
    execlp("./infinite", "./Infinite", NULL);
    execlp("ls ", "-la", NULL);

    char* argv[] = {"ls", "-la", NULL};
    execv("ls", argv);
    printf("AFTER EXEC");
    return 0;
}