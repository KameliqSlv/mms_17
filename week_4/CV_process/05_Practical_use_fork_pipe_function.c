#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>     // Important
//#include <time.h>       // Important
#include <sys/wait.h>
#include <sys/errno.h>
#include "sys/types.h"

/*
    да напишем програма, в която:
    1. Дефинираме ендо-мерен маси от цели числа;
    2. Създава два процеса
    3. CHILD - процеса чете елементите от 0 до средата и ги сумира и отпечатва резултата
    4. PARENT-процеса чете елементите от средата до края и ги сумира и отпрчатва резултат
    5. CHILD - процеса записва в канал своя резултат
    6. PARENT - процеса прочита по канала резултата на CHILD-процеса,
        сумира двете стойности и отпечатва сумата
*/


int main(int argc, char* argv[]){
    // [1]
    int my_arr[] = {7 ,8,9,10,15,18,22,26,29, 36};
    int start , end;
    int n = sizeof(my_arr)/ sizeof(my_arr[0]); // 

    int fd[2];

    if(pipe(fd) == -1){
        perror("Error");
        exit(-1);
    }

    int pid = fork();
    if(pid == -1){
        printf("\n Error \n\n ");
        exit(-1);
    }

    //logic to devide the array:
    if(pid == 0){
        start = 0;
        end = n /2;
    }else {
        start = n / 2;
        end = n;
    }


    int sum = 0;
    int i;
    for(i = start; i < end; i++){
        sum += my_arr[i];
    }

    // [3] [4]
    if(pid == 0){       
        printf("Calculate child sum: %d \n", sum);
    } else {
        printf("Calculate parent sum: %d \n", sum);
    }

    // Check process 
    if(pid == 0){
        close(fd[0]);
        if(write(fd[1], &sum,sizeof(int)) == -1){
            fprintf(stderr,"Write error.\n");
            exit(-1);
        }
        close(fd[1]);
    } else {
        close(fd[1]);
        int sum_child = 0;
        if(read(fd[0],&sum_child,sizeof(int)) == -1){
            perror ("Read Error.");
            exit (-1) ;
        }
        close(fd[0]);

        printf("Read from child: %d\n", sum_child);
        int total_sum = sum + sum_child;
        printf("Total sum: %d \n", total_sum);

    }

   



    return 0;
}