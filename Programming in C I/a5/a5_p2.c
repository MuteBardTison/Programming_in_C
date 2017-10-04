//
//  main.c
//  a5_p2
//
//  Created by QiZihan on 16/9/29.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a5_p2_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char a[80];
    fgets(a,sizeof(a),stdin);
    int i,j;
    for(i=0;i<(unsigned)strlen(a);i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        printf("%c\n",a[i]);
    }
    return 0;
}
