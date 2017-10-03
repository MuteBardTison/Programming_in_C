//
//  main.c
//  a4_p4
//
//  Created by QiZihan on 16/9/26.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a4_p4_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

void print_frame(int n,int m,char c)
{
    int i,j;
    for(i=0;i<m;i++)
        printf("%c",c);
    printf("\n");
    for(j=1;j<n-1;j++)
    {
        printf("%c",c);
        for(i=0;i<m-2;i++)
            printf(" ");
        printf("%c\n",c);
    }
    for(i=0;i<m;i++)
        printf("%c",c);
    printf("\n");
    return;
}


int main()
{
    int m,n;
    char c;
    scanf("%d%d",&n,&m);
    scanf("%*c%c",&c);
    print_frame(n,m,c);
    return 0;
}
