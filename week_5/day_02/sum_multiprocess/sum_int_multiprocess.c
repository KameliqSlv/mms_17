#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define K 5
#define ELEM_SIZE sizeof(int)
int fd;
unsigned long long file_size_bytes;
unsigned long long child_byte_count;
char *file_name; 

//one pipe for each child
int pipes_fd_list[K][2];
    

void child_fun(int child_index){
    fd = open(file_name, O_RDONLY);
    if(fd < 0){
        perror("Could not open");
        exit(-1);
    }
    
    
    
    printf("Started child with_index: %d \n" , child_index);

    unsigned long long sum = 0;
    lseek(fd, child_index*child_byte_count, SEEK_SET );    
    for(int i = 0; i< (file_size_bytes/K)/ELEM_SIZE; i++){
        int curNum = 0;
        read(fd, &curNum, sizeof(int));
        printf("%d\n", curNum);
        sum += curNum;
    }
    printf("Ending child with child_index: %d, SUM %llu \n" , child_index, sum);
    write(pipes_fd_list[][], &sum, sizeof(sum))
}

int main(int argc, char * argv[]){
    if(argc != 2){
        perror("invalid argument");
        exit(-1);
    }

    file_name = argv[1];

    fd = open(file_name, O_RDONLY);
    
    if(fd < 0){
        perror("Could not open");
        exit(-1);
    }

    file_size_bytes = lseek(fd, 0, SEEK_END);
    child_byte_count = file_size_bytes / K;
    printf("file size is %lld\n", file_size_bytes);
    printf("cGILD_BYTES_COUNT: %lld\n", child_byte_count);
    close(fd);

   
    int pid, child_index;
    for(int i =0;i<K;i++){
        //child_index = i;
        // create pipe for each pipe
        pipe(pipes_fd_list[i]);
        //Only the parents
        pid=fork();
        
        if(pid < 0){
            exit(1);
        } else if (pid == 0){
            // child
            

            child_fun(i);
            return 0;
            //break;
        }// else{
        //      //wait(NULL);
        //     // parent

        // }
    }

    // if(pid == 0){
    //     printf("Started child with_index: %d \n" , child_index);
    //     return 0;
    // }

    // if(pid > 0){
        // parent
    
    for(int i = 0 ; i< K ; i++){
         wait(NULL);
    }


    unsigned long long sum_total = 0;
    unsigned long long cur_partial_sum;
    for(int i = 0 ; i< K ; i++){
        read(pipes_fd_list[i][0], &cur_partial_sum);

    }
    printf("Parent\n");

    //}
}   