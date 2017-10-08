/*
 JTSK-320112
 a1_p7.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#include <math.h>
unsigned char set3bits(unsigned char c,int f,int s, int t){
    int sum;
    sum=pow(2,f)+pow(2,s)+pow(2,t);
    c|=sum;
    return c;
}

int main(){
    unsigned char c;
    int i,s,f,se,t;
    long int r;
    r=c;
    s=128;
    scanf("%c",&c);
    scanf("%d%d%d",&f,&se,&t);
    printf("The decimal representation is: %d\n",c);
    printf("The binary representation is: ");
    for(i=0;i<8;i++)
    {
        r=(c&s)>>(7-i);
        printf("%ld",r&1);
        s>>=1;
    }
    printf("\n");
    
    printf("After setting the bits: ");
    s=128;
    c=set3bits(c, f, se, t);
    for(i=0;i<8;i++)
    {
        r=(c&s)>>(7-i);
        printf("%ld",r&1);
        s>>=1;
    }
    printf("\n");
    return 0;
}
