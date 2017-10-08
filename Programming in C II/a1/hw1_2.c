/*
 JTSK-320112
 a1_p2.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#define DET_BIT(C) (C&1)
int main(){
    unsigned char c;
    scanf("%c",&c);
    printf("The decimal representation is: %d\n",c);
    printf("The least significant bit is: %d\n",DET_BIT(c));
    return 0;
}
