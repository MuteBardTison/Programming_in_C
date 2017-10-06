//
//  main.c
//  a6_p2
//
//  Created by QiZihan on 16/9/30.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a6_p2_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

void triple(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(i=0;i<size;i++)
        arr[i]=arr[i]*3;
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int main()
{
    int s;
    int a[]={3,2,9,3,7,12};
    s=6;
    triple(a,s);
    return 0;
}
