/*
==============================================================================================
    Bubble Sort :: Lessons 4
==============================================================================================
*/
#include <stdio.h>

void buble_sort(int arr[], int size);

int main(int argc, char *argv[]){

    int arr[] = {98,45,78,22,44};
    
    int size = sizeof(arr)/ sizeof(arr[0]);

    for(int i = 0; i<size; i++){
        printf("%d :: ", arr[i]);
    }
    printf("\n");

    buble_sort(arr, size);
    for(int i = 0; i<size; i++){
        printf("%d :: ", arr[i]);
    }
    printf("\n");


}//end of main


//----------------------------------------------------------------
void buble_sort(int arr[], int size){
    _Bool swapped = 0;
    int counter = 0;

    do{
        swapped = 0;
        for(int i = 0 ; i < size-1 - counter; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                
                swapped = 1;
            }
        }
        counter++;
    }while (swapped);
} // end of buble_sort()