//
//  main.c
//  a6_p6_m1
//
//  Created by QiZihan on 16/10/6.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a6_p6_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
int sum(int n,int m)
{
    if(m==n)
        return n;
    else
        return m+sum(n,m-1);
}

int main()
{
    int n,m,s;
    scanf("%d%d",&n,&m);
    if(n>m)
    {
        s=n;
        n=m;
        m=s;
    }
    printf("%d\n",sum(n,m));
    return 0;
}
