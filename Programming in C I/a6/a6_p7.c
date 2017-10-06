//
//  main.c
//  a6_p7_m1
//
//  Created by QiZihan on 16/10/6.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a6_p7_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}

int main()
{
    int a,b,s;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        s=a;
        a=b;
        b=s;
    }
    printf("The gcd is %d.\n",gcd(a,b));
    return 0;
}
