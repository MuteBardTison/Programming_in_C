//
//  main.c
//  a3_p7
//
//  Created by QiZihan on 16/9/26.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a3_p7_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

int main()
{
    char ch;
    int i,n;
    scanf("%c",&ch);
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        printf("%c\n",ch+i);
    return 0;
}
