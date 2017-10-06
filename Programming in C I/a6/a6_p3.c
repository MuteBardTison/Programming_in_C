//
//  main.c
//  a6_p3
//
//  Created by QiZihan on 16/10/5.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a6_p3_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <string.h>

int count_upper(char*str){
    int i,num=0;
    for(i=0;i<strlen(str);i++)
    {
        if('A'<=str[i]&&str[i]<='Z')
            num++;
    }
    return num;
}

int main()
{
    char a[100];
    char *ptr=a;
    while(1)
    {
    fgets(a,sizeof(a),stdin);
    if(*ptr=='\n')
        break;
    else
        printf("%d\n",count_upper(ptr));
    }
    return 0;
}
