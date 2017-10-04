//
//  main.c
//  a5_p5
//
//  Created by QiZihan on 16/10/5.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a5_p5_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <string.h>
int count_consonants(char str[])
{
    int num=0,i;
    char *ptr=str;
    for(i=0;i<strlen(ptr);i++)
    {
        if(ptr[i]=='a'||ptr[i]=='e'||ptr[i]=='i'||ptr[i]=='o'||ptr[i]=='u'||ptr[i]=='A'||ptr[i]=='E'||ptr[i]=='I'||ptr[i]=='O'||ptr[i]=='U')
            continue;
        else
        {
            if(  ('a'<=ptr[i]&&ptr[i]<='z')||('A'<=ptr[i]&&ptr[i]<='Z')  )
                num++;
            else
                continue;
        }
    }
    return num;
}
int main()
{
    char a[100];
    while(1)
    {
        fgets(a,sizeof(a),stdin);
        if(a[0]=='\n')
            break;
        else
            printf("%d\n",count_consonants(a));
    }
    return 0;
}
