#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b){
    return (*(int*)a - (*(int*)b));
}

int main(int argc, char* argv[]){
    printf("%p\n", argv);
    printf("%p\n", argv[0]);
    printf("%c\n", argv[0][2]);
    int arr[] = {4 ,5,-10,15,31,22,45,1};


    qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(arr[0]), compare_ints);
    //qsort(argv[1], argc -1 , sizeof(int ), __compar_fn_t compar)
    //qsort(arr, sizeof(arr));
    //qsort(arr, 8, sizeof(int), qsort)

    for (size_t i = 0; i< 8; i++) {
        printf("%d ", arr[i]);
    }
}