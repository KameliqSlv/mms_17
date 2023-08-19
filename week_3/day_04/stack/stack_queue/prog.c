//#include <stdio.h>
#include "linked_list.h"
#include "queuq.h"


int main() {
    link_list *ll = init_linked_list();
    push_back((Data){1}, ll);
    print_linked_list(ll);
    push_back((Data){2}, ll);
    print_linked_list(ll);
    push_back((Data){3}, ll);
    print_linked_list(ll);
    push_back((Data){4}, ll);
    print_linked_list(ll);
    Data d;
    pop_back(ll, &d);
    print_linked_list(ll);
    pop_front(ll, NULL);
    print_linked_list(ll);
    pop_front(ll, NULL);
    print_linked_list(ll);
    deinit_linked_list(ll);

    Queue *q1 = init_queue();
    eqnueue((Data){10}, q1);
    print_queue(*q1);
    eqnueue((Data){20}, q1);
    print_queue(*q1);
    eqnueue((Data){30}, q1);
    print_queue(*q1);

    Data *d3 = malloc(sizeof(Data));
    (*d3).val = 100;
    d3->val = 200;
    // d3->val will be overwritten over 
    dequeue(d3, q1);

    print_queue(*q1);
    eqnueue((Data){40}, q1);
    print_queue(*q1);

    dequeue(d3, q1);
    print_queue(*q1);
    dequeue(d3, q1);
    print_queue(*q1);

    deinit_queue(q1);
    

    
    return 0;
}