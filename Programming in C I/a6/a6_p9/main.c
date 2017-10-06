//
//  main.c
//  a6_p9_m1
//
//  Created by QiZihan on 16/10/7.
//  Copyright © 2016年 QiZihan. All rights reserved.
//
/*
 JTSK-320111
 a6_p9_m1.c
 Zihan Qi
 z.qi@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,b,sum;
    char s1[1000];
    char s2[1000];
    scanf("%s",s1);
    scanf("%s",s2);
    strcat(s1,".txt");
    strcat(s2,".txt");
    FILE *fin1,*fin2,*fout;
    fin1=fopen(s1,"r");
    fin2=fopen(s2,"r");
    fout=fopen("sum.txt","w");
    
    fscanf(fin1,"%d",&a);
    fscanf(fin2,"%d",&b);
    sum=a+b;
    fprintf(fout,"%d",sum);
    fclose(fin1);
    fclose(fin2);
    fclose(fout);
    return 0;
}
