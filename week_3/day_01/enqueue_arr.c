#include<stdio.h>
#include<stdlib.h>

typedef struct A {
    int data;
} A;
typedef struct Queue {
    A *arr;
    size_t capacity;
    size_t start;
    size_t cur_elem_count;
} Quequ;
// cur_elem_count - броя на елементите в стека
// capacity - максималния брой на елементи в стека
Quequ init_queue(size_t capacity) {
    // Заделя масив с max_elem_count на брой елементи в динамичната памет
    Quequ q = {
        .arr = calloc(capacity, sizeof(A)),
        .capacity = capacity,
        .cur_elem_count = 0,

    };
    return q;
   
}

int enquque(Quequ *q, A elem) {
    // Проверява дали има място в стека
    if(q->capacity == q->cur_elem_count) {
        return -1;
    }
    // Добавя елемент на първата свободна позиция
    q->arr[q->cur_elem_count] = elem;
    q->cur_elem_count++;
    return 0;
}

int dequequ(Quequ *q, A *res) {
    // Проверяваме дали стекът е празен
    if(q->cur_elem_count == 0) {
        return -1;
    }
    if(res){
        *res = q->arr[0];
    }
    
     q->cur_elem_count--;
    for(size_t i = 0; i < q->cur_elem_count; i++) {
        q->arr[i] = q->arr[i + 1];

    }
    //q->arr[q->cur_elem_count] = (A){0};
    
    return 0;
    
}

void print_elems(Quequ q) {
    // Печата елементите на стека
    for(size_t i = 0; i < q.capacity; i++) {
        if(i < q.cur_elem_count) {
            printf("%3d ", q.arr[i].data);
        } else {
            printf("___ ");
        }
    }
    printf("\n");
}

void deinit(Quequ q) {
    free(q.arr);
}
int main() {
    Quequ q1 = init_queue(10);
    enquque(&q1, (A){ .data = 10 });
    print_elems(q1);
    enquque(&q1, (A){ .data = 20});
    print_elems(q1);
    enquque(&q1, (A){ .data = 30});
    print_elems(q1);

    A remove_elem;
    printf("RM EL: \n");
    dequequ(&q1, &remove_elem);
    print_elems(q1);
    dequequ(&q1, &remove_elem);
    print_elems(q1);
    
    deinit(q1);
    
    return 0;
}