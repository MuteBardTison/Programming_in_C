//
//  main.c
//  a2_p1_m1
//
//  Created by QiZihan on 16/9/24.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a2_p1_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

int main(){
    float a,b;
    scanf("%f%f",&a,&b);
    printf("%f\n%f\n%f\n",a+b,b-a,a*a);
    
    int c,d,sum,pro;
    scanf("%d%d",&c,&d);
    sum=c+d;
    pro=c*d;
    printf("%d\n%d\n",sum,pro);
    
    char e,f;
    int SUM,PRO;
    scanf("%*c%c",&e);
    scanf("%*c%c",&f);
    SUM=e+f;
    PRO=e*f;
    printf("%d\n%d\n",SUM,PRO);
    printf("%c\n%c\n",SUM,PRO);
    return (0);
}
