#include <stddef.h>
#include <stdio.h>

void find_max_ptr(int arr[], size_t n, int *max_elem,int **max_ptr)
{
    printf("%p\n", max_ptr);
    printf("%p\n", *max_ptr);
    printf("%d\n", **max_ptr);

    for (size_t i; i<n; i++) {
        if (arr[i] > *max_elem) {
            *max_elem = arr[i];
            *max_ptr = arr + i;
        }
    }
}
int main(){
    int arr[] = {1,2,-5,100,12,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *ptr;
    int max_elem;
    find_max_ptr(arr, n,&max_elem ,&ptr);
    printf("Max value: %d\n", max_elem);
    printf("Nax pointer %d\n", *ptr);
}