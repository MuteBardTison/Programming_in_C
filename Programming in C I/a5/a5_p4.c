//
//  main.c
//  a5_p4
//
//  Created by QiZihan on 16/10/5.
//  Copyright © 2016年 QiZihan. All rights reserved.
//

#include <stdio.h>
#include <string.h>
/*
 JTSK-320111
 a5_p4_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
int count_consonants(char str[])
{
    int num=0,i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            continue;
        else
        {
            if(  ('a'<=str[i]&&str[i]<='z')||('A'<=str[i]&&str[i]<='Z')  )
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
