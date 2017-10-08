/*
 JTSK-320112
 a5_p1.c
 long,danni
 d.long@jacobs-university.de
 */

#include "stack.h"
#include <stdlib.h>

void push(struct stack *s,int n){
    if (s->count<12){
        s->array[s->count]=n;
        s->count++;
        printf("Pushing %d\n",n);
    }
    else
        printf("Pushing Stack Overflow\n");
}

int pop(struct stack *s){
    if(s->count>0){
        s->count--;
        return s->array[s->count];
    }
    else
        printf("Stack Underflow\n");
    return -1;
}

int isempty(struct stack*s){
    if(s->count>0)
        return 0;
    else
        return 1;
}

void empty(struct stack *s){
    printf("Emptying Stack ");
    while(!isempty(s))
        printf("%d ",pop(s));
    printf("\n");
}
