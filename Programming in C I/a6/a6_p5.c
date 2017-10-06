//
//  main.c
//  a6_p5_m1
//
//  Created by QiZihan on 16/10/6.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a6_p5_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double compute_norm(double *ptr,int n)
{
    int i;
    double norm,s=0;
    for(i=0;i<n;i++)
        s+=ptr[i]*ptr[i];
    norm=sqrt(s);
    return norm;
}

int main()
{
    int i,n;
    double *ptr;
    double max,min;
    scanf("%d",&n);
    ptr=(double*)malloc(sizeof(double)*n);
    for(i=0;i<n;i++)
        scanf("%lf",&ptr[i]);
    
    printf("%lf\n",compute_norm(ptr,n));
    
    max=ptr[0];
    for(i=0;i<n;i++)
    {
        if(ptr[i]>max)
            max=ptr[i];
    }
    printf("%lf\n",max);
    
    min=ptr[0];
    for(i=0;i<n;i++)
    {
        if(ptr[i]<min)
            min=ptr[i];
    }
    printf("%lf\n",min);
    
    free(ptr);
    return 0;
}
