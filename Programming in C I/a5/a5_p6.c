//
//  main.c
//  a5_p6
//
//  Created by QiZihan on 16/10/5.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a5_p6_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
double maxdiff(double arr[],int n)
{
    int i;
    double diff,max,min;
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    diff=max-min;
    return diff;
}
int main()
{
    int i,n;
    double *dyn;
    scanf("%d",&n);
    dyn=(double*)malloc(sizeof(double)*n);
    if(dyn==NULL)
        exit (1);
    for(i=0;i<n;i++)
        scanf("%lf",&dyn[i]);
    printf("%lf\n",maxdiff(dyn,n));
    free(dyn);
    return 0;
}
