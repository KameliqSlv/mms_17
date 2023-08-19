#include <stdio.h>
#include <stdint.h>


int main(int argc, char *argv[]) {
    uint8_t my_arr[10] ={1,2,3,4,5,6,7,8,9,10};

    uint8_t max_value = my_arr[0];
    //uint8_t max_value = INT8_MIN;
    uint8_t min_value = my_arr[0]; 
    //uint8_t min_value = INT8_MAX;
    uint8_t avg_value = 0;
    //uint8_t avg_value = INT8_MIN;


    int arr_length = sizeof(my_arr)/sizeof(my_arr[0]);


    for(int i = 0; i < arr_length; i++){
        if(my_arr[i] > max_value){
            max_value = my_arr[i];
        }
        if(my_arr[i] < min_value){
            min_value = my_arr[i];
        }
        avg_value += my_arr[i];
    }

    avg_value /= arr_length;

    printf("Max value: %d\n", max_value);
    printf("Min value: %d\n", min_value);
    printf("Average value: %d\n", avg_value);



    return 0;
} //end of main