//
//  main.c
//  333
//
//  Created by QiZihan on 16/9/23.
//  Copyright © 2016年 QiZihan. All rights reserved.
//

/*
 JTSK-320111
 a4_p3_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */

#include <stdio.h>

double to_kilogram(int pound, int ounce){
    double kilo;
    kilo=(453.6*pound+28.350*ounce)*0.001;
    return kilo;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The result is %lf\n",to_kilogram(a,b));
    return 0;
}
