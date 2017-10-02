//
//  main.c
//  a3_p6
//
//  Created by QiZihan on 16/9/26.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a3_p6_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>

int main(){
    char ch;
    int i,n;
    scanf("%c",&ch);
    while(1){
        scanf("%d",&n);
        if(n>0)
            break;
    }
    
    for(i=1;i<=n;i++)
        printf("%c ",ch);
    return 0;
}
