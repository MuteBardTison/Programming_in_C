//
//  main.c
//  a3_p4_m1
//
//  Created by QiZihan on 16/9/24.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a3_p4_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

int main()
{
    int num,a;
    while(1){
        scanf("%d",&num);
        if(num>0)
            break;
    }
    
    a=2;
    printf("1 minute is 60 seconds\n");
    while(a>1&&a<=num)
    {
        printf("%d minutes are %d seconds\n",a,a*60);
        a=a+1;
    }
    return 0;
}

