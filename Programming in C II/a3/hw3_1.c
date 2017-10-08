/*
 JTSK-320112
 a3_p1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

struct list{
    int info;
    struct list* next;
};

struct list* push_front(struct list *my_list, int value) {
    struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }
    newel->info = value;
    newel->next = my_list;
    return newel;
}

struct list* remove_first(struct list *my_list){
    while(my_list != NULL){
        if(my_list->next==NULL){
            my_list=NULL;
            break;
        }
        else{
            my_list=my_list->next;
            break;
        }
    }
    return my_list;
}

struct list* add_elem(struct list *my_list, int n){
    struct list *newelem;
    struct list *ptr;
    ptr=my_list;
    
    newelem = (struct list *) malloc(sizeof(struct list));
    if (newelem == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }
    newelem->info=n;
    newelem->next=NULL;
    
    if(ptr==NULL){
        return newelem;
    }
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next = newelem;
    return my_list;
}

void print_elements(struct list *my_list) {
    while (my_list != NULL) {
        printf("%d ", my_list->info);
        my_list = my_list->next;
    }
    printf("\n");
}

void dispose_list(struct list* my_list) {
    struct list *nextelem;
    while (my_list != NULL) {
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
}

int main(){
    char c;
    int n;
    struct list *s=NULL;
    for(;;){
        scanf("%c",&c);
        switch(c){
        case 'a':
                scanf("%d",&n);
                getchar();
                s = add_elem(s, n);
                break;
        case 'b':
                scanf("%d",&n);
                getchar();
                s = push_front(s, n);
                break;
        case 'r':
                s = remove_first(s);
                break;
        case 'p':
                print_elements(s);
                break;
        case 'q':
                dispose_list(s);
                return 0;
        }
    }
    return 0;
}
