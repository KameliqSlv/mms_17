#include <stdio.h>
#include <stdlib.h>

#define N 10

double arr[N];
//start_index - elementa, kojto e wlqzyl naj otdawna w opashkata
//end_index - indeksa na kojto da zapazim now element na opashkata

size_t start_index = 0, end_index = 0;
//     resd_ptr     write_ptr


//enqueue - dobawqme now element pri end_index
//dequeue - premahwa element or start_index
void print_buffer(){
    for(size_t i=0; i<N; i++){
        if(arr[i] != 0){
            printf("%3.2lf ", arr[i]);
        } else {
            printf(" --- ");
        }
    }

        printf("\n%ld\n\n", end_index-start_index);

    
}

void enqueue(double new_elem){
    if(end_index - start_index  == N){
        perror("ERROR");
        return;
    }
    arr[end_index%N] = new_elem;
    end_index++;

  
    
}

double dequeue(){
    if(end_index - start_index == 0){
        exit(-1);
    }
    size_t old_start = start_index;
    arr[old_start] = 0;
    start_index++;
    return(arr[old_start%N]);
    

   
}

int main(){
     enqueue(1);
    print_buffer();
    enqueue(2);
    print_buffer();
    enqueue(3);
    print_buffer();
    enqueue(4);
    print_buffer();


    dequeue();
    print_buffer();
    dequeue();
    print_buffer();


    enqueue(5);
    enqueue(6);
    enqueue(7);
    print_buffer();

    dequeue();
    dequeue();
    dequeue();
    print_buffer();


    
    return 0;

    
}