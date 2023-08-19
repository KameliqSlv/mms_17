#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>     // Important
//#include <time.h>       // Important
#include <sys/wait.h>

/*
    да разпечатим програмата в която да създадем два процеса,
    ккоято да разпечатва числа от 1 до 10,
    но ако сме в родителския main() (PARENT) процеса да разпечата само от 6 до 10 процеса
    а ако сме в наследника (CHILD) процеса от 1 до 5
*/

int main(int argc, char *argv[]){
    // { :: 1 :: }
    int pid = fork();   // Create a new process - wo we have two times 
    int n;              //number

    if(pid == 0){       // we are in the child process
        n = 1;
      //  printf("Hi, from the child n is : %d\n", n);
    } else{             // we are in re paent process
        n = 6;
        // printf("Hi, from the main n is : %d\n", n);
    }

    //sleep(5);


    // { :: 2 :: }
    if(pid != 0){       // if we are in the main process , wait for the child process to terminate
        wait(NULL);
    }

    int i;
    for(i = n; i< n + 5; i++){      // n will start from 1 ot 6 depending in in wich process we are running
        printf("%d \n", i);
        //fflush(stdout);           // flush stdout to show the actual
    }

    //



}

