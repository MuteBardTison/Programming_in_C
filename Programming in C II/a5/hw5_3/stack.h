/*
 JTSK-320112
 a5_p3.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#ifndef stack_h
#define stack_h

#include <stdio.h>

struct stack{
    unsigned int count;
    char character[30];  //container
};

void push(struct stack*, char);
char pop(struct stack*);
void empty(struct stack*);
int isempty(struct stack*);

#endif /* stack_h */
