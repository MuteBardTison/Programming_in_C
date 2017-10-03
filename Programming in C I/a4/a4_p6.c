//
//  main.c
//  a4_p6
//
//  Created by QiZihan on 16/9/27.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a4_p6_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

int posmin(int v[], int n)
{
    int i,s,min;
    min=v[0];
    for(i=0;i<n;i++)
    {
        if(min>v[i])
            min=v[i];
    }

    for(i=0;i<n;i++)
    {
        if(min==v[i])
            s=i;
    }
    return s;
}

int main()
{
    int i,n;
    int a[50]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n%d\n",posmin(a,n));
    return 0;
}
