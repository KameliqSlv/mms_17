
#include <stdio.h>
#include <stdlib.h>
/*
realizirajte slednite funkcii:

*/

typedef struct A{
    int data;
} A;


typedef struct Stack{
    int *arr;
    size_t capacity;
    size_t cur_elem_count;
}Stack;






Stack init_stack_array(size_t max_elem_count){
    Stack s;
    s.capacity = max_elem_count + 1;  
    s.cur_elem_count = 0;
    s.arr = calloc(max_elem_count, sizeof(A));
    
        //Zadalq masiw s mac_elem.count na broj elementi w dinamichnata pamet
    // Wryshta ukazatel kym nachaloto na masiw
    return s;
}

int push(A el, Stack *s){
 

        if(s->capacity == s->cur_elem_count){
            return -1;
        }
        s->arr[s->cur_elem_count] = el;
        s->cur_elem_count++;
        return 0;
    

    //arr -> data++;

    //dobawq elem kym steka
    // wrysjta 0 pri uspeh i -1 pri neuspeh
}

int pop(A *res, Stack *s){
    //premahwa posledniq element na steka i go predawa chrez ukazatekq res
    // wrysjta 0 pri uspeh i -1 pri neuspeh
    if(s->cur_elem_count == 0){
        return -1;
    }else{
        *res = s->arr[s->cur_elem_count-1];
        s->cur_elem_count--;
        return 0;
    }
}

void print_elems(Stack *s){
    //pechat elementite na steka
   for (int i = 0; i < s->capacity; i++) {
    if(i < s->cur_elem_count){
        printf("%3d ", s->arr[i].data);
    } else {
        printf("_ ");
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



}