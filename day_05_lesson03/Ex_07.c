/*
==============================================================================================
    Binary Search :: Lesson 4
==============================================================================================
*/

#include <stdio.h>

int binary_search(int arr[], int lower, int higher, int key) {
    while (lower <= higher) {
        int mid = lower + (higher - lower)/ 2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key){
            lower = mid + 1;
        } else{
            higher = mid - 1;
        }
            
    }
    return -1;
} // end of binary_search()


int main(int argc, char* argv[]){
    int arr[] = {5,7,9,15,16};

    int size = sizeof(arr)/sizeof(arr[0]);

    int key;
    printf("Select element for search: ");
    scanf("%d", &key);

    int index = binary_search(arr, 0, size -1, key);
    if (index == -1){
        printf("The element not found! \n");
    }else {
        printf("Element %d is found at index %d \n", key,index);
    }


    return 0;
}//end og main function