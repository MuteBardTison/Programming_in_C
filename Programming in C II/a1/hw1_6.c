/*
 JTSK-320112
 a1_p6.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>

int main(){
    unsigned char c;
    int i,s;
    long int r;
    r=c;
    s=128;
    scanf("%c",&c);
    printf("The decimal representation is: %d\n",c);
    printf("The binary representation is: ");
    for(i=0;i<8;i++)
    {
        r=(c&s)>>(7-i);
        printf("%ld",r&1);
        s>>=1;
    }
    printf("\n");
    return 0;
}
