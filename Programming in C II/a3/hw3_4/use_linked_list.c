/*
 JTSK-320112
 use_linked_list.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

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
