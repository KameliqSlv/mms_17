#include <stdio.h>

int getValueWithOffset(int* pnt, int offset);

int main(int argc, char *argv[]) {
    int arr[] = {1,2,3,4,5};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    //print array before ofsets
    for (int i = 0; i < arr_size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }//end of for loop

    int* ptr = arr;

    //print value of index in array
    printf("\nValue of index is %d\n\n", getValueWithOffset(ptr, 1));
    
    // print array after getting value 
    for (int i = 0; i < arr_size; i++) {
        printf("arr[%d] = %d\n", i, getValueWithOffset(ptr, 1));
    }//end of for loop


    return 0;
}//end of main function

int getValueWithOffset(int* pnt, int offset) {
    int* pnt_off = pnt + offset;
    return *pnt_off;
}//end of getValueWithOffset