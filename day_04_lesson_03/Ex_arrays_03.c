#include <stdio.h>

void invert_array (int arr[], int size){
    int start =0;
    int end = size - 1;
    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }//end of while

}//end of invert_array

int main(int argc, char* argv[]){
    int my_array[] = {10,22,98,65,70,34, 1};
    int arr_size = sizeof(my_array)/sizeof(my_array[0]);

    //print befor
    for (int i = 0; i < arr_size; i++) {
        printf("%d : ", my_array[i]);
    }// end of for loop
    printf("\n");

    //convert array
    invert_array(my_array, arr_size);
    
    //print after
    for (int i = 0; i < arr_size; i++) {
        printf("%d : ", my_array[i]);
    }// end of for loop
    printf("\n");
    

    return 0;
}//end of main