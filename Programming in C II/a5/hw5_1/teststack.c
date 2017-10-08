/*
 JTSK-320112
 a5_p1.c
 long,danni
 d.long@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    struct stack my_stack;
    struct stack *s=&my_stack;
    s->count=0;
    char c;
    int n;
    while(1){
        scanf("%c",&c);
        switch(c){
            case 's':
                scanf("%d",&n);
                push(s,n);
                break;
            case 'p':
                printf("Popping ");
                int val=pop(s);
                if (val!=-1)
                    printf("%d\n",val);
                break;
            case 'e':
                empty(s);
                break;
            case 'q':
                printf("Quit\n");
                exit(0);
        }
    }
    return 0;
}

