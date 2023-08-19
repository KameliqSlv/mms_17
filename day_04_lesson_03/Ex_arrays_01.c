#include <stdio.h>


int main(int argc, char *argv[]) {
    int my_arr_01[5] = {15,28,33,45,90};
    
    int my_arr_02[] = {15,28,33,45,90, 95 , 80};

    for(int i=0; i<5; i++){
        printf("Element %d of my_array_01 is %d\n", i, my_arr_01[i]);
    }

    int arr_length = sizeof(my_arr_02)/sizeof(my_arr_02[0]);
    for(int i = 0; i<arr_length; i++){
        printf("Element %d of my_array: %d \n", i, my_arr_02[i]);

    }


    return 0;
}//end of main