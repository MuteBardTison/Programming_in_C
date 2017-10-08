/*
 JTSK-320112
 a1_p5.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>

int main(){
    unsigned char c;
    long int x=0;
    scanf("%c",&c);
    printf("The decimal representation is: %d\n",c);
    printf("The backwards binary representation is: ");
    while(c){
        x<<=1;
        x|=c&1;
        c>>=1;
        printf("%ld",x&1);
    }
    printf("\n");
    return 0;
}
/*
 int main(){
 char c;
 scanf("%c",&c);
 while(1){
 printf("%d",c&1);
 c>>=1;
 if(c==0)
 break;
 }
 printf("\n");
 return 0;
 }
*/
