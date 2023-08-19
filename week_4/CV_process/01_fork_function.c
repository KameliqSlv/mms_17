#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    //{ :: 1 :: }
    //fork(); // create a process - 
    //sp we have two times "Heallo world"
    //printf("Hello, word \n");

    //{ :: 2 :: }
    //int pid = fork(); // pid == Process ID
    //printf("Hello, world from id: %d\n", pid);

    //{ :: 3  :: }
    //if we want to indentify process: 

    //if(pid == 0){       //child process
    //    printf("Hello world from child process \n");
    //}else {             //parrent process
    //    printf("Hello world from main process \n");
   // }


    // { :: 4 :: }
    //fork(); // create a new
    //fork(); // create a new
    //fork();
    //sleep(5); // wait for ..

    // Two fork => 2 of the power of two is 4
    //if we call fork() gain => 2 of the power of tree is 8

    //printf("Hello world \n");


    // { :: 5  :: }
    // how to create only 3 process
    // the child proccess has pid 0, so we have checj if we are in the main-process

    int pid1 = fork();
    printf("Hello world after first forg() pid1: %d \n", pid1);

    if (pid1!=0){               // We are in the main process
        int pid2 =fork();       // Ctreate a new child process of the main
        printf("Hello world after second forg() pid2: %d \n", pid2);
    } else {                    // we are not in the main-process
        printf("Hello world from pid1: %d \n", pid1);
    }

    //printf("Hello world \n");


    return 0;
}   
