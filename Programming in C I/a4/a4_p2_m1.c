//
//  main.c
//  222
//
//  Created by QiZihan on 16/9/23.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a4_p2_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>

double convert(int mm){
    double result;
    result=0.001*mm;
    return result;
}

int main(){
    int value;
    scanf("%d",&value);
    printf("The result is %lf\n",convert(value));
    return 0;
}
