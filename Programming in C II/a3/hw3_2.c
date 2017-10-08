/*
 JTSK-320112
 a3_p2.c
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
//inserting
struct list* insert(struct list *my_list, int n, int val){
    int i,length=0;
    struct list *newelem;
    struct list *ptrtest;
    struct list *ptr;
    struct list *ptr2;
    ptrtest = my_list;
    while(ptrtest!=NULL){
        ptrtest=ptrtest->next;
        length++;
    }
    
    newelem = (struct list *) malloc(sizeof(struct list));
    if (newelem == NULL) {
        printf("Error allocating memory\n");
        exit(1);
    }
    newelem->info=val;
    newelem->next=NULL;
    
    if(my_list==NULL)
        return newelem;
    
    if(n>length||n<0){
        printf("Invalid position!\n");
        return my_list;
    }
    else{
        ptr=my_list;
        for(i=0;i<=n-2;i++){
            ptr=ptr->next;
        }
        ptr2=ptr->next;
        ptr->next=newelem;
        newelem->next=ptr2;
        return my_list;
    }
}
//reversing
/*
struct list* reverse(struct list *my_list){
    // start with NULL
    struct list* p1 = NULL;
    // this will point to the current element
    struct list* p2 = my_list;
    // this will point to the third element
    struct list* p3;
    // as long as the current element is not NULL
    // menas that we still have elements in the list
    while (p2 != NULL)
    {
        // set the pointer for the forward element
        p3  = p2->next;
        // reverse the link between p1 and p2
        p2->next = p1;
        // advance with pointers by interchanging them
        p1 = p2;
        p2 = p3;
    }
    // at the end only the beginning of the list has to
    // be set which is p1 at that moment
    my_list = p1;
    return my_list;
}
*/
 struct list* reverse2(struct list *my_list){
 struct list* ptr;
 struct list* ptr2;
 ptr = my_list;
 my_list=NULL;
 while(ptr!=NULL){
 ptr2=ptr->next;
 ptr->next=my_list;
 my_list=ptr;
 ptr=ptr2;
 }
 return my_list;
 }

int main(){
    char c;
    int n,val;
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
            case 'i':
                scanf("%d%d",&n,&val);
                getchar();
                s=insert(s, n, val);
                break;
            case 'R':
                s=reverse2(s);
                break;
        }
    }
    return 0;
}
