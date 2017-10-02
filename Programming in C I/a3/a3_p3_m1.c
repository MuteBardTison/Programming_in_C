//
//  main.c
//  3
//
//  Created by QiZihan on 16/9/22.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a3_p3_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(96<a&&a<123)
        printf("It is a lowercase alphabetic character.\n");
    else
        printf("It is not a lowercase alphabetic character.\n");
    return 0;
}
