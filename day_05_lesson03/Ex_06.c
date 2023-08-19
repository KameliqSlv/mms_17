/*
==============================================================================================
    linear search :: Lesson 4 
==============================================================================================
*/

#include <stdio.h>

int linear_search(int arr[],int size, int key ){
    for(int i = 0; i<size; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}// end of linear_search()


int main(int argc, char* argv[]){
    int arr[] = {5,7,9,15,14};

    int size = sizeof(arr)/sizeof(arr[0]);

    int key;
    printf("Select element for search: ");
    scanf("%d", &key);

    int index = linear_search(arr, size, key);
    if (index == -1){
        printf("The element not found! \n");
    }else {
        printf("Element %d is found at index %d \n", key,index);
    }

    return 0;
}//end of main function