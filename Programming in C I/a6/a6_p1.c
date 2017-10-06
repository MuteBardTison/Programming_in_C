//
//  main.c
//  a6_p1
//
//  Created by QiZihan on 16/9/30.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a6_p1_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

void rectangle(char ch, int r, int c)
{
    int i,j;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
            printf("%c",ch);
        printf("\n");
    }
}
int main()
{
    char ch;
    int r,c;
    scanf("%c",&ch);
    scanf("%d%d",&r,&c);
    rectangle(ch,r,c);
    return 0;
}
