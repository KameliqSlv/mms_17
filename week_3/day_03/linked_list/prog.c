//#include <stdio.h>
#include "linked_list.h"
#include "linked_list.h"


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
    
    return 0;
}