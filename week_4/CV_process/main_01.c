//Using FIFO-files to comunicatr between processes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <time.h>
#include <unistd.h>     // Important
//#include <time.h>       // Important
#include <sys/wait.h>
#include <sys/errno.h>
#include "sys/types.h"
#include <sys/fcntl.h>


/*
    main_01 - writes 10 integers into myFifo
*/


int main(int argc, char *argv[]){
    // { 1 } cteating myFIFO
    if(mkfifo("myFIFO", 0777) == -1){
       if(errno != EEXIST){
        printf("coudn't create fifo file %s \n", strerror(errno));
        return 1;
       }
    }

    //{ 2 } Cteate array and fill with random
    int my_arr[10];
    srand(time(NULL));
    for (size_t i = 0 ;i<10; i++){
        my_arr[i]= rand() % 100;
        printf("%d ", my_arr[i]);
    }
    printf("\n");

    // { 3 } open myFIFO and write into it
    int fd = open("myFIFO", O_WRONLY);
    if(fd == -1){
        printf("Failed to open\n");
        return 2; //code 1 for this case
    }

    if(write(fd, my_arr ,sizeof(my_arr)) == -1){
        perror("\nError writing file!\n");
        return 3; // code 2 for this case
    }

    close(fd);

    return 0;
}