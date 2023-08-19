#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* getRandom(size_t elem_c){
    //int A = -100, B = 100;
    int *arr = malloc(sizeof(int) * elem_c);
    //int *p = arr;
    for(size_t i=0; i<elem_c; i++){
        //arr[i] = A + rand() % (B - A);
        arr[i ] = -100 + rand() % 201;
        // rand % 100 == 99
        //rand(0 %200) == 199
        //rand() % 100 -100 = -100 - 0
    }
    return arr;
    //free(p);
}

int main(){
    //srand(55);
    srand(time(NULL)); //wryshta sekundote ot 1970
    int *arr = getRandom(10);
    for(size_t i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
    //printf("Adres kym pyrwiq element w masiwa%p\n", p_arr);
    free(arr);

    return 0;
}
