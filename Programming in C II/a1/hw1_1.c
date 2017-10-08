/*
 JTSK-320112
 a1_p1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>
#define SWAP(data_type,A,B) {data_type temp; temp = (A); (A) = (B); (B) = temp;}

int main(){
    int m,n;
    double x,y;
    scanf("%d%d",&m,&n);
    scanf("%lf%lf",&x,&y);
    SWAP(int,m,n);
    SWAP(double,x,y);
    printf("After swapping:\n");
    printf("%d\n%d\n",m,n);
    printf("%.6lf\n%.6lf\n",x,y);
    return 0;
}
