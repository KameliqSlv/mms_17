#include <stdio.h>

int arr[3] = {0,1,2};

void swap(int* a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permutation(int begin, int end){
    if (begin == end){
        for(size_t i = 0; i < end; i++){
            printf("%d",arr[i]);
        }
        printf("\n");
    } 

    //Obhojdame wsichki kandidati za 1 element
    for(int i = begin ; i < end; i++){
        //arr[i] shte byde ppyrwiqt tekusht element
        swap(&arr[begin], &arr[i]);
        permutation(begin+1, end);
        swap(&arr[begin], &arr[i]);
        
    }
}


int main(){
    permutation(0, 3);
   
    // 1 2 3
    // 2 3 1
    // 3 1 2 
    // 1 3 2
    // 2 1 3 
    // 3 2 1 
}
