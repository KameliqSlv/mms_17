#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
    int val;
}Data;

typedef struct Node{
    Data data;
    struct Node *next;
}Node;
/*
void print_linked_list(Node *head){
printf("%d ", head->val);
printf("%d ", head->next->val );
printf("%d ", head->next->next->val);
printf("\n");
}*/

void print_linked_list_loop(Node *head){
    
    while (head != NULL){
        printf("%d ", head -> data.val);
        head = head->next;
    }
    printf("\n");
}

void push_back(Data new_data, Node *head){
    while(head->next!=NULL){
        head = head->next;
    }
    Node *last_elem = malloc(sizeof(Node));
    last_elem->data = new_data;
    last_elem->next = NULL;
    head->next = last_elem;
   // head = head->next;
    


}

void pop_back(Node *head, Data *result){
    if(head->next == NULL){
        *result = head->data;
        free(head);
        head = NULL;

         
        //free(head);
    }

    while(head->next != NULL){
        head = head->next;
    }
    
    *result = head->next->data;
    free(head->next);
    head->next = NULL;
}

void push_front(Node *head, Data new_data){
    
    Node *pred_elem = malloc(sizeof(Node));
    pred_elem->data = new_data;
    pred_elem->next = head->next;
    head->next = pred_elem;
   // head = head->next;
    
}

void pop_front(Node *head, Data *result){
    if(head->next == NULL){
        *result = head->data;
        free(head);
        head = NULL;
         
        //free(head);
    }
    *result = head->next->data;
    free(head->next);
    head->next = NULL;

}



int main(){
    /*
    Node n1,n2,n3;

    Node *head;
    head = &n1;

    n1.data.val =13;
    n1.next = &n2;

    n2.data.val = 15;
    n2.next = &n3;

    n3.data.val = 20;
    n3.next = NULL;
*/

    Node n1 = {(Data){5}, NULL};
    Node *head = &n1;


    push_back((Data){4}, head);
    push_back((Data){6}, head);
    push_back((Data){7}, head);
    push_back((Data){8}, head);

    Node *head2 = NULL;

    Data *pop_data = NULL;
    pop_back(head, pop_data);

    push_front(head, (Data){4});


    //pop_front(head, pop_data);
    //print_linked_list(&n1);
    print_linked_list_loop(head);
    
    //push_front(head, (Data){4});
    return 0;

}