//Using FIFO-files to comunicatr between processes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>     // Important
//#include <time.h>       // Important
#include <sys/wait.h>
#include <sys/errno.h>
#include "sys/types.h"
#include <sys/fcntl.h>


/*
    main_02 - READ writes 10 integers from myFifo and print
*/


int main(int argc, char *argv[]){
     // { 1 } Cteate array and fill with random
    int my_arr[10];
 
    

    // { 2 } open myFIFO and read from it
    int fd = open("myFIFO", O_RDONLY);
    if(fd == -1){
        printf("Failed to open\n");
        return 1; //code 1 for this case
    }

    if(read(fd, my_arr ,sizeof(my_arr)) == -1){
        printf("Failed to read\n");
        return 2; // code 2 for this case
    }


    close(fd);

    // { 3 } print value from my_arr
    for (size_t i = 0 ;i<10; i++){
        //my_arr[i]= rand() % 100;
        printf("Received from main01 %d \n", my_arr[i]);
    }



    return 0;
}