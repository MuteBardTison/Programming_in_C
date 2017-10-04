//
//  main.c
//  a5_p1
//
//  Created by QiZihan on 16/9/29.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a5_p1_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

int main()
{
    int a,b;
    float i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
      printf("%12.3f %12.3f %12.3f",i,i*i,i*i*i);
      printf("\n");
    }
    return 0;
}
