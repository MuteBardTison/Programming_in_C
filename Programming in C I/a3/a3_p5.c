//
//  main.c
//  a3_p5
//
//  Created by QiZihan on 16/9/26.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a3_p5_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>


int main()
{
    int num,m;
    while(1){
        scanf("%d",&num);
        if(num>0)
            break;
    }
 
        printf("1 minute is 60 seconds\n");
        
        for(m=2;m<=num;m++)
        {
            printf("%d minutes are %d seconds\n",m,m*60);
        }
    return 0;
}
