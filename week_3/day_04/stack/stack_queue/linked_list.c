#include "linked_list.h"



void print_linked_list(link_list *ll) {
    // Да изпечатаме всеки елемент на свързания списък
    Node *head = ll->head;
    for(;head != NULL; head=head->next) {
        printf("%d ", head->d.val);
    }
    printf("\n");
    printf("LAstr elemnt is %d\n", ll->tail->d.val);

}

void push_back(Data new_data, link_list *ll) {
    // *head -Node*
    // **head - Node
    // Allocate dynamic memory for new node
    Node **head = &(ll->head);
    Node **tail = &(ll->tail);

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
        *tail = new_last_node;
        return;
    }

    //Sled posledniq element dibawqme now Node
    (*tail)->next = new_last_node;
    //*tail shte pazo adresa na nowiq element
    *tail = (*tail)->next;
}

void pop_back(link_list *ll, Data *result) {
    Node **head = &(ll->head); 
    Node **tail = &(ll->tail);

    //empty linked list
    if(!(*head)){
        exit(-1);
    }

    //Only one elemnt in linked list
    if((*head)->next == NULL){
        *result = (*head)->d;
        free(*head);
        *head = NULL;
        *tail = NULL;
        return;
    }

    //Find second to last element 
    Node *cur_node = *head;
    //while the next mode is not the last
    while(cur_node->next->next != NULL){
        cur_node = cur_node->next;
    }

    //After while - cur_node is second to last node
    //After while - current node->next to last node
    *result = cur_node->next->d;
    //free last node
    free(cur_node->next);
    cur_node->next = NULL;

    //Tail will point to new last node
    *tail = cur_node;
}

void push_front(Data new_data, link_list *ll) {
    Node **head = &(ll->head);
    Node *new_node = malloc(sizeof(Node));
    
    //Проверяваме специалния случай дали не е паразел листа
    if(new_node == NULL){
        exit(-1);
    }
   
    new_node->d = new_data;
    new_node->next = (*head);
    (*head) = new_node;

    //if linked lisr wa empty(tail is NULL)
    //must change tail to point to new node
    if(ll->tail == NULL){
        ll->tail = new_node;
    }
//     // Добавя нов Node в началото на свързания списък
}

void pop_front(link_list *ll, Data *result) {
    Node **head = &(ll->head);

    if(!(*head)){
        exit(-1);
    }
    //Ako podadem NULL kato wtrori argument - new zapiswame Node nikyde
    if(result != NULL){
        *result = (*head)->d;
    }

    Node *second = (*head) ->next;
    free(head);
    *head = second;

    //sled premahwane na elementa 
    //Ako predi e imalo samo edin element 
    // Togawa *head e NULL
    if(*head == NULL){
        ll->tail = NULL;
    }
}


link_list* init_linked_list(){
    link_list *ll= (link_list*)malloc(sizeof(link_list));
    if(!ll) exit(-1);
    ll->head = NULL;
    ll->tail = NULL;
    return ll;
}

void deinit_linked_list(link_list *ll) {
    //is linked list em[ty
    // NoDE **head
    //*head dali e NULL

    //LL *ll
    // ll->head dali e NULL

    //is empty list
    while(!(ll->head)){
        // ne iskame da zapishem nikyde rezultata
        pop_front(ll, NULL);
    }
    free(ll);

}


