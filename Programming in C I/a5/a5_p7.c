//
//  main.c
//  a5_p7
//
//  Created by QiZihan on 16/10/5.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a5_p7_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
void two_val(float a[], int n)
{
    int i;
    float min1,min2;
    if(a[0]<a[1])
    {
        min1=a[0];
        min2=a[1];
    }
    else
    {
        min1=a[1];
        min2=a[0];
    }
    for(i=2;i<n;i++)
    {
        if(a[i]<min2)
        {
          if(a[i]<min1)
          {
            min2=min1;
            min1=a[i];
          }
          else
            min2=a[i];
        }
    }
    printf("%f %f",min1,min2);
}

int main()
{
    int i,n;
    float *dyn;
    scanf("%d",&n);
    dyn=(float*)malloc(sizeof(float)*n);
    if(dyn==NULL)
        exit(1);
    for(i=0;i<n;i++)
        scanf("%f",&dyn[i]);
    two_val(dyn,n);
    free(dyn);
    return 0;
}
