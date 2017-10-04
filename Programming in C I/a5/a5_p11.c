//
//  main.c
//  a5_p11
//
//  Created by Longdanni on 16/10/6.
//  Copyright © 2016年 Longdanni. All rights reserved.
//
/*
 JTSK-320111
 a5_p11_m1.c
 Long, Danni
 bingsilaosi@hotmail.com
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int count_char(char *str,char c)
{
    int i,s=0;
    for(i=0;i<strlen(str);i++)
    {
     if(str[i]==c)
         s++;
     else
        continue;
    }
    return s;
}

int main()
{
    int n;
    scanf("%d",&n);
    char *str;
    str=(char*)malloc(sizeof(char)*n);
    if(str==NULL)
        exit(1);
    fgets(str,n,stdin);
    char a,b,c,d,e;
    a='B';
    printf("The character 'B' occurs %d times.\n",count_char(str,a));
    b='p';
    printf("The character 'p' occurs %d times.\n",count_char(str,b));
    c='i';
    printf("The character 'i' occurs %d times.\n",count_char(str,c));
    d='D';
    printf("The character 'D' occurs %d times.\n",count_char(str,d));
    e='z';
    printf("The character 'z' occurs %d times.\n",count_char(str,e));
    return 0;
} 
