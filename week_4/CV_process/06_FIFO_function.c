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
    Да създадем програма програма която дефинира FIFO pipe
    Да се запише стойност в FIFO файла и да се разпечати

*/

int main(int argc, char *arcv[]){
    // { 1 }
    if(mkfifo("myFIFO", 0777) == -1){
       if(errno != EEXIST){
        //    printf("couldn't create FIFO file\n");
        //}
        printf("coudn't create fifo file %s \n", strerror(errno));
        return 1;
        //perror("[ERROR] mkfifo");
       }
        // exit(-1);
    }

    printf("Opening...\n");
    int fd = open("myFIFO", O_RDWR );
    printf("Opened! \n");

    int myVal = 67; //ASCII character of upper case 'C'
    if(write (fd,&myVal,sizeof(int)) == -1){
        printf("Problem with writing! \n");
        exit(-1);
    }
    printf("Written \n");

    close(fd);
    printf("Closed! \n");

    return 0;
}