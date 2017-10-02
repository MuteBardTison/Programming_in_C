//
//  main.c
//  2
//
//  Created by QiZihan on 16/9/22.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a3_p2_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a%4==0&&a%7==0)
        printf("The number is divisible by 4 and 7\n");
    else
        printf("The number is not divisible by both 4 and 7\n");
    return 0;
}
