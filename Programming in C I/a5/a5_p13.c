//
//  main.c
//  a5_p13
//
//  Created by QiZihan on 16/10/6.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a5_p13_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void mixcase(char *str)
{
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(islower(str[i])!=0)
            str[i]=toupper(str[i]);
        else
            str[i]=tolower(str[i]);
    }
}

int main()
{
    int i;
    char a[80];
    char b[]="exit\n";
    for(i=0;i>=0;i++)
    {
    fgets(a,sizeof(a),stdin);
    if(strcmp(b,a)==0)
    break;
    mixcase(a);
    printf("%s",a);
    }
return 0;
}
