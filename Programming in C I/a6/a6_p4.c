//
//  main.c
//  a6_p4_m1
//
//  Created by QiZihan on 16/10/6.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a6_p4_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
void triple(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]*3);
    printf("\n");
}
int main()
{
    int i,n;
    int *ptr;
    scanf("%d",&n);
    ptr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&ptr[i]);
    triple(ptr,n);
    free (ptr);
    return 0;
}
