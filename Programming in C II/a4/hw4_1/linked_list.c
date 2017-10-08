/*
 JTSK-320112
 linked_list.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

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
