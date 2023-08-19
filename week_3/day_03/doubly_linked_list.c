#include <stdio.h>

typedef struct{
    int val;
}Data;

typedef struct{
    struct Node *prev;
    Data data;
    struct Node *next;
}d_node;

void print_linked_list(d_node *head) {
    // Да изпечатаме всеки елемент на свързания списък
    for(;head != NULL; head=head->next) {
        printf("%d ", head->data.val);
    }
    printf("\n");

}


int main(){
   
}