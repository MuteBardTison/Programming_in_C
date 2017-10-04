//
//  main.c
//  a5_p10
//
//  Created by QiZihan on 16/10/6.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a5_p10_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
void sumdiffproddiv(double a,double b,double *sum,double *diff,double *prod,double *div)
{
    *sum=a+b;
    *diff=a-b;
    *prod=a*b;
    *div=a/b;
}
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf%lf",&a,&b);
    double *sum=&c;
    double *diff=&d;
    double *prod=&e;
    double *div=&f;
    sumdiffproddiv(a,b,sum,diff,prod,div);
    printf("%lf\n",*sum);
    printf("%lf\n",*diff);
    printf("%lf\n",*prod);
    printf("%lf\n",*div);
    if(a+b==*sum && a-b==*diff && a*b==*prod && a/b==*div)
        printf("The function works correctly.\n");
    else
        printf("Error.\n");
    return 0;
}
