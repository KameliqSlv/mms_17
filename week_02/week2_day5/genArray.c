#include <stdio.h>
#include <stdlib.h>

void* getArray(void(*init_elem)(void*), size_t elem_c, size_t elem_size){
    void *arr = malloc( elem_c * elem_size );
   // int *el = malloc(sizeof(int)* elem_size);

    //trqbwa da lasnem arr na char za da movem da go uweli`im s edinica
    //adresa na el 0 arr 
//adresa na el 1 arr (char*)arr+ 1*elem_size
//adresa na el 2 arr (char*)arr+ 2*elem_size
//adresa na el 3 arr (char*)arr+ 3*elem_size
//adresa na el 4 arr (char*)arr+ 4* elem_size

    for(int i = 0; i < elem_c; i++){
        init_elem((char*)arr + i*elem_size);
        // arr + elem size // array with ++
    }

    return arr;


}

void init_int_to_100(void *ptr){
    int *int_ptr = ((int*)ptr);
    *int_ptr = 100;
}

void init_double_to_random(void *ptr){
    *((double*)ptr) =rand()%200000- 100000/ 1000.;

}

int main(){
    int *arr = getArray(init_int_to_100, 33, sizeof(int));

    for(int i = 0; i < 33; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    double *arr2 = getArray(init_double_to_random, 10, sizeof(double));

    for(int i = 0; i < 10; i++){
        printf("%f ", arr2[i]);
    }
    printf("\n");
    free(arr);
    return 0;


}



