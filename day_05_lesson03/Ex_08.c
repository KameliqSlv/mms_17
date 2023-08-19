/*
==============================================================================================
    Selection Sort :: Lesson 4
==============================================================================================
*/

#include <stdio.h>

// prototype function :: 
void selection_sort(int arr[], int size); 
void reverse_selection_sort(int arr[], int size);
void swap(int arr[], int size);

int main(int argc, char *argv[]) {
    int arr[] = {98,45,78,22,44};
    
    int size = sizeof(arr)/ sizeof(arr[0]);

    for(int i = 0; i<size; i++){
        printf("%d :: ", arr[i]);
    }
    printf("\n");

    selection_sort(arr, size);
    for(int i = 0; i<size; i++){
        printf("%d :: ", arr[i]);
    }
    printf("\n");

    reverse_selection_sort(arr, size);
     for(int i = 0; i<size; i++){
        printf("%d :: ", arr[i]);
    }
    printf("\n");

    return 0;
} //end of main()


//Sort Array 
void selection_sort( int arr[], int size){
    for (int i = 0; i< size -1; i++){
        int min = i;
        for(int j = i+1; j< size ; j++){
            if(arr[j]< arr[min]){
                min = j;
            }
        }
        
        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

//Sort reverce array 
void reverse_selection_sort( int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int max = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j]> arr[max]){
                max = j;
            }
        } 
        if(max != i){
            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
    }
} // end of reverse_selection_array()

// return index with 1
void swap(int arr[], int size){
    for (int i = 0; i< size - 1; i++){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i +1] = temp;   
    }
}// end of swap