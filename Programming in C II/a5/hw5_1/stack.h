/*
 JTSK-320112
 a5_p1.c
 long,danni
 d.long@jacobs-university.de
 */

#ifndef stack_h
#define stack_h

#include <stdio.h>

struct stack{
    unsigned int count;
    int array[12];  //container
};

void push(struct stack*, int);
int pop(struct stack*);
void empty(struct stack*);
int isempty(struct stack*);

#endif /* stack_h */
