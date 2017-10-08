/*
 JTSK-320112
 a5_p2.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    struct stack my_stack;
    struct stack *s=&my_stack;
    s->count=0;
    int n;
    scanf("%d",&n);
    convert(s,n);
    return 0;
}
