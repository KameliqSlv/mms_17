#include<stdio.h>
#include<stdlib.h>
typedef struct Data {
    int val;   
} Data;

struct Node {
    Data d;
    struct Node *next;
};

typedef struct link_list{
    struct Node *head;
} link_list;

typedef struct Node Node;

void print_linked_list(Node *head) {
    // Да изпечатаме всеки елемент на свързания списък
    for(;head != NULL; head=head->next) {
        printf("%d ", head->d.val);
    }
    printf("\n");

}
void push_back(Data new_data, Node **head) {
    // Allocate dynamic memory for new node
    Node *new_last_node = malloc(sizeof(Node));
    if(!new_last_node) {
        perror("Could not malloc\n");
        exit(-1);
    }
    new_last_node->d = new_data;
    new_last_node->next = NULL;

    // Empty linked list
    if(*head == NULL) {
        *head = new_last_node;
        return;
    }

    // Get address of first node
    Node *cur_node = *head;
    while(cur_node->next != NULL) {
        cur_node= cur_node->next;
    }
    // After while loop - cur_node keeps address of last node
    cur_node->next = new_last_node;
}
void pop_back(Node **head, Data *result) {
    //Намираме предпоследния елемент
    //Намираме последния елемент
    if(!(*head)){
        exit(-1);
    }
    //Only one elemnt in linked list
    if((*head)->next == NULL){
        *result = (*head)->d;
        free(*head);
        *head = NULL;
    }


    //Find last element 
    Node *cur_node = *head;
    //while the next mode is not the last
    while(cur_node->next->next != NULL){
        cur_node = cur_node->next;
    }

    //After while - current node->next to last node
    *result = cur_node->next->d;
    //free last node
    free(cur_node->next);
    cur_node->next = NULL;
    // Премахва последния елемент на свързания списък
}


void push_front(Data new_data, Node **head) {
    //Заделчмв динамична памет
    Node *new_node = malloc(sizeof(Node));
    
    //Проверяваме специалния случай дали не е паразел листа
    if(new_node == NULL){
        exit(-1);
    }
   
    new_node->d = new_data;
    new_node->next = (*head);
    (*head) = new_node;
//     // Добавя нов Node в началото на свързания списък
}


void pop_front(Node **head, Data *result) {
//     // Премахва първия Node от свързания списък
    if(!(*head)){
        exit(-1);
    }

    *result = (*head) ->d;
    Node *second = (*head) ->next;
    free(head);
    *head = second;

    //Node *cur_node = *head;
    //(*head) = (*head)->next;
    //*result = cur_node->next->d;
    //free last node
    //free(cur_node->next);
    //cur_node->next = NULL;
}

void free_all(){

}



int main() {
    Node n1 = {(Data){5}, NULL};
    Node *head = &n1;
    push_back((Data){6}, &head);
    push_back((Data){7}, &head);
    push_back((Data){8}, &head);
    push_back((Data){9}, &head);
    print_linked_list(head);

    printf("\n\n");
    Node *head2 = NULL; 
    push_back((Data){100}, &head2);
    push_back((Data){200}, &head2);
    push_back((Data){300}, &head2);
    push_back((Data){400}, &head2);
    print_linked_list(head2);
    Data p;
    pop_back(&head2, &p);

    Node *head3=NULL;
    push_front((Data){100}, &head3);
    push_back((Data){200}, &head3);
    push_back((Data){200}, &head3);
    push_back((Data){200}, &head3);

    push_front((Data){100}, &head3);
    push_front((Data){100}, &head3);
    print_linked_list(head3);


    pop_front(&head3, &p);
    print_linked_list(head3);




    return 0;
}