t/*
 JTSK-320112
 a3_p3.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

struct list{
    char data;
    struct list* next;
    struct list* prev;
};
//global variable
struct list *head;
//add the following character to the beginning of the list
void add_beginning(char c){
    struct list* newNode;
    //creat a new node
    newNode = (struct list *) malloc(sizeof(struct list));
    if (newNode == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }
    newNode->data=c;
    newNode->next=NULL;
    newNode->prev=NULL;
    //original list is empty
    if(head == NULL) {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
//remove all elements with the given character
void remove_char(char c){
    struct list *temp=head;
    int length=0,s=0;
    //counting the length
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    //creat tail
    struct list *tail;
    tail=temp;
    //list is empty
    if(head==NULL){
        printf("The element is not in the list!");
        return;
    }
    temp=head;
    while(temp){
        if(temp->data==c){
            //if not tail
            if(temp->next)
                temp->next->prev=temp->prev;
            //if tail
            else{
                tail=temp->prev;
                if(tail)
                    tail->next=NULL;
            }
            //if not head
            if(temp->prev)
                temp->prev->next=temp->next;
            //if head
            else{
                head = temp->next;
                if(head)
                    head->prev = NULL;
            }
            s++;
        }
        temp=temp->next;
    }
    if(s==0)
        printf("The element is not in the list!\n");
}
//print the current list
void print_elements(){
    struct list *temp=head;
    while(temp!=NULL){
        printf("%c ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
//print the list backwards
void print_backwards(){
    struct list *temp=head;
    if(temp==NULL){
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        printf("%c ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
//empty the list, free the memory used by the link and quit the execution of the program
void dispose_list() {
    struct list *temp;
    while (head != NULL) {
        temp = head->next;
        free(head);
        head = temp;
    }
    exit(0);
}
//main function
int main(){
    int n;
    char c;
    for(;;){
        scanf("%d",&n);
        switch(n){
            case 1:
                getchar();
                scanf("%c",&c);
                add_beginning(c);
                break;
            case 2:
                getchar();
                scanf("%c",&c);
                remove_char(c);
                break;
            case 3:
                print_elements();
                break;
            case 4:
                print_backwards();
                break;
            case 5:
                dispose_list();
                break;
        }
    }
    return 0;
}
