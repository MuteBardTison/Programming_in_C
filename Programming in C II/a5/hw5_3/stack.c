/*
 JTSK-320112
 a5_p3.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include "stack.h"
#include <stdlib.h>
#include <string.h>

char* myreverse(char* s){
    char* temp;
    temp=(char*)malloc(sizeof(char)*strlen(s));
    int i;
    for(i=0;i<strlen(s);i++){
        temp[i]=s[strlen(s)-i];
    }
    return temp;
}
void push(struct stack *s,char c){
    if (s->count<30){
        s->character[s->count]=c;
        s->count++;
        //myprintf("Pushing %c\n",c);
    }
    else
        printf("Pushing Stack Overflow\n");
}

char pop(struct stack *s){
    if(s->count>0){
        s->count--;
        return s->character[s->count];
    }
    else
        printf("Stack Underflow\n");
    return '\0';
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
