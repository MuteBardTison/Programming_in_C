//
//  main.c
//  a5_p12
//
//  Created by QiZihan on 16/10/6.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a5_p12_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <string.h>
void myreplace(char *str,char c,char e)
{
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==c)
            str[i]=e;
    }
}
int main()
{
    int i;
    char a[70];
    char b[]="quit\n";
    
    char c,e;
    for(i=1;i>=1;i++)
    {
        fgets(a,70,stdin);
        if(strcmp(b,a)==0)
            break;
        else
        {
            c=getchar();
            getchar();
            e=getchar();
            getchar();
        printf("%s",a);
          myreplace(a,c,e);
        printf("%s",a);
        }
    }
    return 0;
}
