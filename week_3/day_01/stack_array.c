
#include <stdio.h>
#include <stdlib.h>
/*
realizirajte slednite funkcii:

*/

typedef struct A{
    int data;
} A;

size_t capacity, cur_elem_count;
//A *arr_begin[capacity];
//int top = -1;

A *arr_begin;




void init_stack_array(size_t max_elem_count){
    capacity = max_elem_count + 1;  
    cur_elem_count = 0;
    arr_begin = calloc(max_elem_count, sizeof(A));
    
        //Zadalq masiw s mac_elem.count na broj elementi w dinamichnata pamet
    // Wryshta ukazatel kym nachaloto na masiw

}

int push(A el){
    
        
        
        //arr_begin[++capacity] = el;

        if(capacity == cur_elem_count){
            return -1;
        }
        arr_begin[cur_elem_count] = el;
        cur_elem_count++;
        return 0;
    

    //arr -> data++;

    //dobawq elem kym steka
    // wrysjta 0 pri uspeh i -1 pri neuspeh
}

int pop(A *res){
    //premahwa posledniq element na steka i go predawa chrez ukazatekq res
    // wrysjta 0 pri uspeh i -1 pri neuspeh
    if(cur_elem_count == 0){
        return -1;
    }
    if(res){
        *res = arr_begin[cur_elem_count-1];

    }
            cur_elem_count--;
        return 0;
}

void print_elems(){
    //pechat elementite na steka
   for (int i = 0; i < capacity; i++) {
    if(i < cur_elem_count){
        printf("%3d ", arr_begin[i].data);
    } else {
        printf("___ ");
    }
    printf("\n");
    //printf("%d ", arr_begin[i]);
  }
}


int main(){
    init_stack_array(10);
    
    push((A){10});
    print_elems();
    push((A){2});
        push((A){10});
        print_elems();

        pop(NULL);



}