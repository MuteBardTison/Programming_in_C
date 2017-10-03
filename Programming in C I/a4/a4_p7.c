//
//  main.c
//  a4_p7
//
//  Created by QiZihan on 16/9/27.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a4_p7_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
double sum(double a,double b)
{
    double SUM;
    SUM=a+b;
    return SUM;
}

void sumbyref(double a,double b,double *s)
{
    *s=a+b;
}

void swapbyref(double *a,double *b)
{
    double s;
    s=*a;
    *a=*b;
    *b=s;
}

int main(){
    double m,n,SUM;
    double *ptr=&SUM;
    double *ptr2=&m;
    double *ptr3=&n;
    scanf("%lf%lf",&m,&n);
    
    printf("%lf\n",sum(m,n));
    
    sumbyref(m,n,ptr);
    printf("%lf\n",*ptr);
    
    swapbyref(ptr2,ptr3);
    printf("%lf %lf\n",*ptr2,*ptr3);
    return 0;
}
